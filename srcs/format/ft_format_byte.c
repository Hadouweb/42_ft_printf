/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_byte.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:24:22 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 17:17:04 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_byte(t_format *f, unsigned long long *n)
{
	if (f->conv == 'O')
		*n = (unsigned long long)*n;
	else if (f->l % 2 == 0 && f->l > 0)
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
		*n = (unsigned int)*n;
}

void	ft_format_byte(va_list ap, t_format **f)
{
	unsigned long long	n;
	char				*str;
	int					i;

	i = 0;
	n = va_arg(ap, unsigned long long);
	(*f)->nbr = n;
	ft_modif_type_byte(*f, &n);
	str = ft_uitoa_base(n, 8, '0');
	(*f)->space = 0;
	//if (((*f)->sharp && !(*f)->prec && !(*f)->size && n != 0) || ((*f)->sharp && (*f)->pnt))
	//	(*f)->len += ft_putchar_len('0');
	ft_print_all(f, str);
}
