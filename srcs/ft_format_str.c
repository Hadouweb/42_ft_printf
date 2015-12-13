/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:33:29 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:27:28 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_str(va_list ap, t_format **f)
{
	char	*str;

	(*f)->conv = 0;
	str = va_arg(ap, char*);
	if (!str)
		str = "(null)";
	(*f)->len += ft_putstr_len(str);
}
