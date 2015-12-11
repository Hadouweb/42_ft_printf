/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:45:41 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:11:33 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_str(va_list ap, t_format **f)
{
    char	   *str;

	(*f)->conv = 0;
    str = va_arg(ap, char*);
    if (!str)
        str = "(null)";
	ft_putstr(str);
    return (ft_strlen(str));
}
