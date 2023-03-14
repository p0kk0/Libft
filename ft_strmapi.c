/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:26:14 by felsanch          #+#    #+#             */
/*   Updated: 2023/03/01 18:08:42 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	size_t			tam;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tam = ft_strlen(s);
	a = malloc (sizeof (char) * (tam + 1));
	if (!a)
		return (NULL);
	while (i < tam)
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
