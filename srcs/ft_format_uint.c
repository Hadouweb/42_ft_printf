/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:35:05 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 03:27:10 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format_uint(va_list ap, t_format **f)
{
	unsigned long long		n;

	(*f)->conv = 0;
	n = va_arg(ap, unsigned long long);
	ft_putnbr_u(n);
	if (n == 0)
		return (1);
	return (ft_nbrlen_u(n, 10));
}
