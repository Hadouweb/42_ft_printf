/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:28:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 10:40:03 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_hexa(t_format *f, unsigned long long *n)
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
		*n = (unsigned int)*n;
}

void	ft_format_hexa(va_list ap, t_format **f)
{
	unsigned long long	n;
	char				*str;
	int					len;
	int					i;

	len = 0;
	i = 0;
	n = va_arg(ap, unsigned long long);
	(*f)->nbr = n;
	ft_modif_type_hexa(*f, &n);
	str = ft_uitoa_base(n, 16, '0');
	(*f)->space = 0;
	len = ft_nbrlen(n, 16);
	if (n == 0 && !(*f)->pnt && !(*f)->size)
		(*f)->len += ft_putchar_len('0');
	else if ((*f)->sharp && str && n != 0)
		(*f)->sign = "0x";
	ft_print_all(f, str);
}

void	ft_format_hexaup(va_list ap, t_format **f)
{
	unsigned long long	n;
	char				*str;
	int					len;

	n = va_arg(ap, unsigned long long);
	(*f)->nbr = n;
	ft_modif_type_hexa(*f, &n);
	str = ft_uitoa_base(n, 16, '0' - 32);
	(*f)->space = 0;
	len = ft_nbrlen_u(n, 16);
	if (n == 0 && !(*f)->pnt && !(*f)->size)
		(*f)->len += ft_putchar_len('0');
	else if ((*f)->sharp && str)
		(*f)->sign = "0X";
	ft_print_all(f, str);

}
