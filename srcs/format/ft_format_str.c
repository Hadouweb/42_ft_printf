/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:33:29 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 13:10:46 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_str(va_list ap, t_format **f)
{
	char	*str;

	str = NULL;
	if ((*f)->conv == 's')
	{
		if ((*f)->l)
			ft_format_uni_many(ap, f);
		else
		{
			str = va_arg(ap, char*);
			if (!str)
				str = "(null)";
			ft_print_all_char(f, str);
		}
	}
	else if ((*f)->conv == 'c')
		ft_format_char(ap, f);
}

void	ft_format_char(va_list ap, t_format **f)
{
	char 	c;
	char 	*str;

	c = 0;
	str = NULL;
	if ((*f)->l)
		ft_format_uni_one(ap, f);
	else
	{
		c = va_arg(ap, int);
		if (ft_join_all_char(f, c))
			(*f)->len += ft_putchar_len(c);
	}
}