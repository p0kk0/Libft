/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:22:48 by felsanch          #+#    #+#             */
/*   Updated: 2023/02/02 18:27:59 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*ps;

	ps = (char *)src;
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (ps[j] != '\0' && (i + j + 1) < size)
	{
		dst[i + j] = ps[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (ft_strlen(ps) + i);
}
