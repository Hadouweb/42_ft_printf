/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:32:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 00:39:39 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_ptr(t_format *f, unsigned long long *n)
{
	if (f->l % 2 == 0 && f->l > 0)
		*n = (unsigned long long)*n;
	else if (f->l % 2 != 0)
		*n = (unsigned long)*n;
	else if (f->j)
		*n = (uintmax_t) * n;
	else if (f->z)
		*n = (size_t)*n;
	else if (f->h % 2 != 0)
		*n = (unsigned short)*n;
	else if (f->h % 2 == 0 && f->h > 0)
		*n = (unsigned char)*n;
	else
		*n = (unsigned long)*n;
}

void	ft_format_ptr(va_list ap, t_format **f)
{
	char			*str;
	unsigned long	n;

	n = va_arg(ap, unsigned long);
	//ft_modif_type_ptr(*f, &n);
	//(*f)->size = 0;
	str = ft_itoa_base(n, 16, '0');
	(*f)->sign = "0x";
	if (n == 0 && !(*f)->prec && (*f)->pnt)
		(*f)->len += ft_putstr_len("0x");
	else
		ft_print_all(f, str);
}