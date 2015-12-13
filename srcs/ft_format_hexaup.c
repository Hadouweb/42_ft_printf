/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexaup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:28:40 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:25:54 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_hexaup(va_list ap, t_format **f)
{
	unsigned int	n;
	char			*str;
	int				len;

	n = va_arg(ap, unsigned int);
	str = ft_itoa_base(n, 16, '0' - 32);
	len = ft_nbrlen_u(n, 16);
	if ((*f)->sharp && str)
	{
		str = ft_strjoin("0X", str);
		len += 2;
	}
	(*f)->len += ft_putstr_len(str);
}
