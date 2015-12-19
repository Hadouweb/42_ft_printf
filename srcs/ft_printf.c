/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:36:54 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 15:47:48 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_save_string(char **str, t_format **f, va_list ap)
{
	size_t	i;

	while (**str)
	{
		i = 0;
		if (**str == '%')
		{
			ft_format_init(f);
			(*str)++;
			if (ft_check_conv(f, str) || ft_parse_percent(str, f, ap))
				ft_select_format(ap, f);
			else
			{
				if ((*f)->size)
					ft_print_size(f, str);
				if (**str)
					(*f)->len += ft_putchar_len(**str);
			}
		}
		else
			(*f)->len += ft_putchar_len(**str);
		(*str)++;
	}
	//ft_print_format(*f);
}

int		ft_printf(const char *tmp, ...)
{
	va_list		ap;
	char		*str;
	t_format	*f;

	va_start(ap, tmp);
	f = (t_format *)malloc(sizeof(t_format));
	f->len = 0;
	str = (char *)malloc(sizeof(char) * (strlen(tmp)) + 1);
	str = strcpy(str, tmp);
	ft_save_string(&str, &f, ap);
	va_end(ap);
	return (f->len);
}
