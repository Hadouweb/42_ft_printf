/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_byte.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:24:22 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:23:55 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_byte(va_list ap, t_format **f)
{
	unsigned long	n;
	char			*str;
	int				i;

	i = 0;
	n = va_arg(ap, unsigned long);
	str = ft_itoa_base(n, 8, '0');
	if ((*f)->sharp && str[0] != '0')
		str = ft_strjoin("0", str);
	(*f)->len += ft_putstr_len(str);
}
