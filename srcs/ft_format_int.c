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

int     ft_format_int(va_list ap, t_format *f)
{
    if (f->conv == 'd' || f->conv == 'i')
    {
        int     n;
        
		n = va_arg(ap, int);
	printf("OK\n");
        ft_putnbr(n);
        return (ft_nbrlen(n, 10));
    } 
    else if (f->conv == 'D')
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
