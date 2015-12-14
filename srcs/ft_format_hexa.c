/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:28:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/14 06:42:33 by nle-bret         ###   ########.fr       */
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
		*n = (unsigned long long)*n;
}

void	ft_format_hexa(va_list ap, t_format **f)
{
	unsigned long long	n;
	char				*str;
	int					len;
	int					i;
	int					size;

	len = 0;
	size = 0;
	i = 0;
	n = va_arg(ap, unsigned long long);
	if (n == 0)
		(*f)->len += ft_putchar_len('0');
	else
	{
		ft_modif_type_hexa(*f, &n);
		str = ft_uitoa_base(n, 16, '0');
		len = ft_nbrlen(n, 16);
		if ((*f)->sharp && str)
		{
			str = ft_strjoin("0x", str);
			len += 2;
		}
		if ((*f)->size)
		{
			size = ft_atoi((*f)->size) - ft_strlen(str);
			ft_join_all(*f, ft_strsize(*f, size), &str);
		}
		(*f)->len += ft_putstr_len(str);
	}
}

void	ft_format_hexaup(va_list ap, t_format **f)
{
	unsigned long long	n;
	char				*str;
	int					len;
	int					size;

	size = 0;
	n = va_arg(ap, unsigned long long);
	if (n == 0)
		(*f)->len += ft_putchar_len('0');
	else
	{
		ft_modif_type_hexa(*f, &n);
		str = ft_uitoa_base(n, 16, '0' - 32);
		len = ft_nbrlen_u(n, 16);
		if ((*f)->sharp && str)
		{
			str = ft_strjoin("0X", str);
			len += 2;
		}
		if ((*f)->size)
		{
			size = ft_atoi((*f)->size) - ft_strlen(str);
			ft_join_all(*f, ft_strsize(*f, size), &str);
		}
		(*f)->len += ft_putstr_len(str);
	}
}
