/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:10:22 by felsanch          #+#    #+#             */
/*   Updated: 2023/04/23 14:24:17 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_len(char const *s, char c)
{
	int	k;

	k = 0;
	while (*s && *s != c)
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
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
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
	while (*s)
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
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
