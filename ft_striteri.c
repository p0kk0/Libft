/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:03:30 by felsanch          #+#    #+#             */
/*   Updated: 2023/03/01 18:23:44 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			tam;
	unsigned int	i;

	i = 0;
	tam = ft_strlen(s);
	while (i < tam)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
