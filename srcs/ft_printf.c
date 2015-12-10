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
	int		ret;

	i = 0;
	cnt = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			while ((ret = ft_check_flag(format, &str[i])) != 0)
				i += ret;
			while ((ret = ft_check_modifier(format, &str[i])) != 0)
				i += ret;
			ft_check_conv(format, &str[i]);
			cnt += ft_select_format(ap, *format);
		}
		else
		{
			ft_putchar(str[i]);
			cnt++;
		}
		i++;
	}
	(*format)->len = cnt;
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
