/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:19:43 by felsanch          #+#    #+#             */
/*   Updated: 2023/02/23 18:46:36 by felsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numbertam(long n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n = n * (-1);
		ft_numbertam(n);
	}
	if (n == 0)
	{
		c++;
		return (c);
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	tam;
	long	longn;
	char	*a;

	longn = (long)n;
	tam = ft_numbertam(longn);
	a = malloc(sizeof (char) * (tam + 1));
	if (!a)
		return (NULL);
	if (longn < 0)
	{
		a[0] = '-';
		longn = longn * (-1);
	}
	if (longn == 0)
		a[0] = '0';
	a[tam--] = '\0';
	while (longn > 0)
	{
		a[tam] = longn % 10 + 48;
		longn = longn / 10;
		tam--;
	}
	return (a);
}
