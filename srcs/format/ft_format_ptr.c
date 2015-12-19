/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:32:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 16:56:46 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_ptr(va_list ap, t_format **f)
{
	char			*str;
	unsigned long	n;

	n = va_arg(ap, unsigned long);
	str = ft_uitoa_base(n, 16, '0');
	if (n == 0)
		str = ft_strdup("");
	if (n == 0 && !(*f)->pnt)
		(*f)->sign = "0x0";
	else
		(*f)->sign = "0x";
	ft_print_all(f, str);
}
