/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:32:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 02:38:17 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_ptr(va_list ap, t_format **f)
{
	char			*str;
	unsigned long	n;

	n = va_arg(ap, unsigned long);
	str = ft_itoa_base(n, 16, '0');
	(*f)->sign = "0x";
	if (n == 0 && !(*f)->prec && (*f)->pnt)
		(*f)->len += ft_putstr_len("0x");
	else
		ft_print_all(f, str);
}

void	ft_join_all_ptr(t_format *f, char *align, char **str)
{
	if (align && !f->less && !f->zero)
		*str = ft_strjoin(align, *str);
	else if (align && (f->less || f->zero))
		*str = ft_strjoin(*str, align);
}