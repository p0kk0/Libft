/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:26:14 by felsanch          #+#    #+#             */
/*   Updated: 2023/10/28 20:24:53 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			tam;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tam = ft_strlen(s);
	str = malloc (sizeof(char) * (tam + 1));
	if (!str)
		return (NULL);
	while (i < tam)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
