/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:19:43 by felsanch          #+#    #+#             */
/*   Updated: 2023/10/28 19:06:32 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numbertam(long n)
{
	int	tam;

	tam = 0;
	if (n < 0)
	{
		n = n * (-1);
		tam++;
		ft_numbertam(n);
	}
	if (n == 0)
		return (tam + 1);
	while (n > 0)
	{
		n = n / 10;
		tam++;
	}
	return (tam);
}

char	*ft_itoa(int n)
{
	long	tam;
	long	long_n;
	char	*a;

	long_n = (long)n;
	tam = ft_numbertam(long_n);
	a = malloc(sizeof (char) * (tam + 1));
	if (!a)
		return (NULL);
	if (long_n < 0)
	{
		*a = '-';
		long_n = long_n * (-1);
	}
	if (long_n == 0)
		*a = '0';
	a[tam--] = '\0';
	while (long_n > 0)
	{
		a[tam] = long_n % 10 + 48;
		long_n = long_n / 10;
		tam--;
	}
	return (a);
}
