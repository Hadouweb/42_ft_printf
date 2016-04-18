/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:28:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 19:03:45 by nle-bret         ###   ########.fr       */
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

void	ft_format_hexa(va_list ap, t_format *f)
{
	unsigned long long	n;
	char				*str;
	char				*tmp;
	int					i;

	i = 0;
	n = va_arg(ap, unsigned long long);
	f->nbr = n;
	ft_modif_type_hexa(f, &n);
	str = ft_ulltoa_base(n, 16);
	if (n == 0)
		str = ft_strdup("0");
	f->space = 0;
	if (f->sharp && str && n != 0)
		f->sign = "0x";
	tmp = str;
	str = ft_str_tolower(str);
	ft_strdel(&tmp);
	ft_print_all(f, str);
}

void	ft_format_hexaup(va_list ap, t_format *f)
{
	unsigned long long	n;
	char				*str;

	n = va_arg(ap, unsigned long long);
	f->nbr = n;
	ft_modif_type_hexa(f, &n);
	str = ft_ulltoa_base(n, 16);
	if (n == 0)
		str = ft_strdup("0");
	f->space = 0;
	if (f->sharp && str && n != 0)
		f->sign = "0X";
	ft_print_all(f, str);
}
