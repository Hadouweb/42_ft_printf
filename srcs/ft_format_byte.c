/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_byte.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:43:36 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:19:47 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_byte(va_list ap, t_format *f)
{
    unsigned long    n;
    char            *str;

    n = va_arg(ap, unsigned long);
    str = ft_itoa_base(n, 8, '0');
	if (f->sharp && str[0] != '0')
    	str = ft_strjoin("0", str);
	ft_putstr(str);
    return (ft_strlen(str));
}
