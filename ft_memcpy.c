/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:18:36 by felsanch          #+#    #+#             */
/*   Updated: 2023/04/20 16:34:39 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	char_dst = (char *)dst;
	char_src = (char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		char_dst[i] = char_src [i];
		i++;
	}
	return (dst);
}
