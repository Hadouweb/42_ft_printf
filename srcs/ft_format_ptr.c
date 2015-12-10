/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:45:30 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:12:45 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_ptr(va_list ap, t_format *format)
{
    char            *p;
    unsigned long   c;

	format->conv = 0;
    ft_putstr("0x");
    c = va_arg(ap, unsigned long);
    p = ft_itoa_base(c, 16, '0');
    ft_putstr(p);
    return (ft_strlen(p) + 2);
}
