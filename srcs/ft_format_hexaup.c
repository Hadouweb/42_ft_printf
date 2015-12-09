/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexaup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:43 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 21:44:51 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_hexaup(va_list ap)
{
    unsigned int     n;
    
	n = va_arg(ap, unsigned int);
    ft_putstr(ft_itoa_base(n, 16, '0' - 32));
    if (n == 0)
        return (1);
    return (ft_nbrlen_u(n, 16));
}
