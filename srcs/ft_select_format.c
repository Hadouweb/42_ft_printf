/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:37:33 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 19:05:10 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_select_format(va_list ap, t_format *f)
{
	if (f->conv == 'd' || f->conv == 'i' || f->conv == 'D')
		ft_format_int(ap, f);
	else if (f->conv == 'o' || f->conv == 'O')
		ft_format_byte(ap, f);
	else if (f->conv == 'u' || f->conv == 'U')
		ft_format_uint(ap, f);
	else if (f->conv == 'x')
		ft_format_hexa(ap, f);
	else if (f->conv == 'X')
		ft_format_hexaup(ap, f);
	else if (f->conv == 'c' || f->conv == 's')
		ft_format_str(ap, f);
	else if (f->conv == 'S')
		ft_format_uni_many(ap, f);
	else if (f->conv == 'C')
		ft_format_uni_one(ap, f);
	else if (f->conv == 'p')
		ft_format_ptr(ap, f);
	else if (f->conv == 'b')
		ft_format_bit(ap, f);
	else
		return (0);
	return (1);
}

int		ft_print_size(t_format *f, char **str)
{
	int		i;
	char	*news;

	i = ft_strlen(*str) - 1;
	news = ft_memalloc(i + 1);
	news = ft_strncpy(news, *str, i);
	ft_print_all(f, news);
	(*str) += i;
	return (0);
}

int		ft_parse_percent(char **str, t_format *f, va_list ap)
{
	int	ret;

	ret = 0;
	while (**str)
	{
		ret = 0;
		ret += ft_check_flag(f, str);
		ret += ft_check_modifier(f, str);
		ret += ft_check_precision(f, str);
		ret += ft_check_size(f, str);
		ret += ft_check_star(f, str, ap);
		if (ft_check_conv(f, str))
			return (1);
		if (!ret)
			return (0);
	}
	return (0);
}
