/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:35:05 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 08:03:06 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_uint(t_format *f, unsigned long long *n)
{
	if (f->conv == 'U')
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
		*n = (unsigned long long)*n;
}

void	ft_format_uint(va_list ap, t_format **f)
{
	unsigned long long		n;
	char					*str;

	n = va_arg(ap, unsigned long long);
	if (n == 0)
		(*f)->len += ft_putchar_len('0');
	else
	{
		ft_modif_type_uint(*f, &n);
		str = ft_uitoa_base(n, 10, 0);
		(*f)->len += ft_putstr_len(str);
	}

}
