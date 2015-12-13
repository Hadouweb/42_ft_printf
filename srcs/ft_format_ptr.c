/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:32:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:41:03 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_ptr(va_list ap, t_format **f)
{
	char			*p;
	unsigned long	c;

	(*f)->conv = 0;
	(*f)->len += ft_putstr_len("0x");
	c = va_arg(ap, unsigned long);
	p = ft_itoa_base(c, 16, '0');
	(*f)->len += ft_putstr_len(p);
}
