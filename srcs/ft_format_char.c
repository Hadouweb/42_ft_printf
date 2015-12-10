/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:43:56 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:09:01 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_char(va_list ap, t_format *format)
{
    int            c;
    
	format->conv = 0;
	c = va_arg(ap, int);
    ft_putchar(c);
    return (1);
}
