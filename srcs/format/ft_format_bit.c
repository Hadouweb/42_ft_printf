/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_bit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:28:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 19:12:09 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_bit(va_list ap, t_format *f)
{
	unsigned long long	n;
	char				*str;
	int					i;

	i = 0;
	n = va_arg(ap, unsigned long long);
	f->nbr = n;
	ft_modif_type_hexa(f, &n);
	str = ft_ulltoa_base(n, 2);
	if (n == 0)
		str = ft_strdup("0");
	f->space = 0;
	ft_print_all(f, str);
}
