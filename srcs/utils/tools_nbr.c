/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:38:25 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/18 12:42:26 by nle-bret         ###   ########.fr       */
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
