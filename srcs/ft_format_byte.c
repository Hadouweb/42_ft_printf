/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_byte.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:43:36 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 00:44:08 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_byte(va_list ap, t_format **f)
{
    unsigned long    n;
    char            *str;
	int				i;

	i = 0;
    n = va_arg(ap, unsigned long);
    str = ft_itoa_base(n, 8, '0');
	if ((*f)->sharp && str[0] != '0')
    	str = ft_strjoin("0", str);
	if ((*f)->prec)
	{
		i = ft_atoi((*f)->prec) - ft_strlen(str);
		while (i > 0)
		{
			str = ft_strjoin("0", str);
			i--;
		}
	}
	ft_putstr(str);
    return (ft_strlen(str));
}
