/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:32:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/15 05:59:41 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_ptr(va_list ap, t_format **f)
{
	char			*p;
	unsigned long	c;

	c = va_arg(ap, unsigned long);
	p = ft_itoa_base(c, 16, '0');
	(*f)->sign = "0x";
	//p = ft_strjoin("0x", p);
	ft_print_all(f, p);
}

void	ft_join_all_ptr(t_format *f, char *align, char **str)
{
	if (align && !f->less && !f->zero)
		*str = ft_strjoin(align, *str);
	else if (align && (f->less || f->zero))
		*str = ft_strjoin(*str, align);
}