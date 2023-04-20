/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:29:58 by felsanch          #+#    #+#             */
/*   Updated: 2023/04/20 16:44:23 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*a;

	i = 0;
	j = ft_strlen(str);
	a = malloc(sizeof(*a) * (j + 1));
	if (!a)
		return (NULL);
	while (i < j)
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
