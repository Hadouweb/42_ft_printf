/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:28 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 21:44:37 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_hexa(va_list ap)
{
    unsigned int     n;
    
	n = va_arg(ap, unsigned int);
    ft_putstr(ft_itoa_base(n, 16, '0'));
    if (n == 0)
        return (1);
    return (ft_nbrlen(n, 16));
}
