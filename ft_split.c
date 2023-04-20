/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:10:22 by felsanch          #+#    #+#             */
/*   Updated: 2023/04/18 17:41:13 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, char c)
{
	int	k;

	k = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		k++;
	}
	return (k);
}

static int	ft_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	return (j);
}

static char	**ft_cells(char *s, char **str, char c)
{
	int	len;
	int	n;

	n = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
				return (NULL);
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!str)
		return (NULL);
	return (ft_cells((char *)s, str, c));
}
