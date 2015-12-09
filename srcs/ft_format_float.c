/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:12 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 21:44:21 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_float(va_list ap)
{
    float   n;

	n = va_arg(ap, int);
    //ft_putnbr_float(n);
    return (ft_nbrlen(n, 10));
}
