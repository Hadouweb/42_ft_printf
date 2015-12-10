/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:45:58 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:09:22 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_uint(va_list ap, t_format *format)
{
    unsigned long long     n;

	format->conv = 0;
    n = va_arg(ap, unsigned long long);
    ft_putnbr_u(n);
    if (n == 0)
        return (1);
    return (ft_nbrlen_u(n, 10));
}
