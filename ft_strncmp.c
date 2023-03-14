/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:29:25 by felsanch          #+#    #+#             */
/*   Updated: 2023/02/07 16:13:18 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
		}
		i++;
	}
	if (i != n)
	{
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	*a;
	char	*b;

	a = "abcdefgh";
	b = "abcdwxyz";
	printf("Original: %d\n", strncmp(a, b, 5));
	printf("FT: %d\n", ft_strncmp(a, b, 5));
	return (0);
}
*/