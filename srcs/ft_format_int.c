/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 22:36:00 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_int(va_list ap, char c)
{
    if (c == 'd' || c == 'i')
    {
        int     n;
        n = va_arg(ap, int);
        ft_putnbr(n);
        return (ft_nbrlen(n, 10));
    } 
    else if (c == 'D')
    {
        long     n;
        n = va_arg(ap, long);
        ft_putnbr(n);
        if (n == 0)
            return (1);
        return (ft_nbrlen(n, 10));
    }
    return (0);
}
