/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:35:05 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:51:49 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_uint(va_list ap, t_format **f)
{
	unsigned long long		n;
	char					*str;

	(*f)->conv = 0;
	n = va_arg(ap, unsigned long long);
	str = ft_uitoa_base(n, 10, 0);
	if (n == 0)
		(*f)->len += ft_putchar_len('0');
	else
		(*f)->len += ft_putstr_len(str);

}
