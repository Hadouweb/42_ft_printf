/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:38:25 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 00:38:52 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_nbrlen(long long n, int base)
{
	char	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= base;
		i++;
	}
	return (i);
}

char	ft_nbrlen_u(unsigned long long n, int base)
{
	char	i;

	i = 0;
	while (n != 0)
	{
		n /= base;
		i++;
	}
	return (i);
}

void	ft_putnbr(long long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n <= -10)
			ft_putnbr(n / 10 * -1);
		ft_putchar(n % 10 * -1 + '0');
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putnbr_u(unsigned long long n)
{
	if (n >= 10)
		ft_putnbr_u(n / 10);
	ft_putchar(n % 10 + '0');
}
