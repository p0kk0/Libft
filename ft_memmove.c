/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:18:47 by felsanch          #+#    #+#             */
/*   Updated: 2023/02/02 15:05:07 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	i = 0;
	char_dst = (char *)dst;
	char_src = (char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	if (char_dst > char_src)
	{
		while (len-- > 0)
		{
			char_dst[len] = char_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}		
	return (dst);
}
