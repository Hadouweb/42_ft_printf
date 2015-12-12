/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:28:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 00:28:18 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format_hexa(va_list ap, t_format **f)
{
	unsigned int	n;
	char			*str;
	int				len;
	int				i;

	len = 0;
	i = 0;
	n = va_arg(ap, unsigned int);
	str = ft_itoa_base(n, 16, '0');
	len = ft_nbrlen(n, 16);
	if ((*f)->sharp && str)
	{
		str = ft_strjoin("0x", str);
		len += 2;
	}
	ft_putstr(str);
	if (n == 0)
		return (1);
	return (len);
}
