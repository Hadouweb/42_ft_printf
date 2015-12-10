/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:46:42 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 06:19:53 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_save_string(char *str, t_format **format, va_list ap)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	ap = 0;
	(*format)->len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			while (ft_check_flag(format, &str[i]))
				i++;
			//cnt += ft_select_format(ap, &str[i += 1]);
		}
		else
		{
			ft_putchar(str[i]);
			cnt++;
		}
		i++;
	}
	ft_print_format(*format);
}

int     ft_printf(const char *f, ...)
{
	va_list     ap;
	char        *str;
	t_format	*format;

	va_start(ap, f);
	format = (t_format *)malloc(sizeof(t_format));
	ft_format_init(&format);
	str = (char *)malloc(sizeof(char) * (strlen(f)) + 1);
	str = strcpy(str, f);
	ft_save_string(str, &format, ap);
	va_end(ap);
	return (format->len);
}
