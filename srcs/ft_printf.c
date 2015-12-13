/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:36:54 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 01:25:29 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_save_string(char *str, t_format **f, va_list ap)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (*str)
	{
		if (*str == '%' && str++)
		{
			ft_format_init(f);
			str += ft_parse_percent(str, f) - 1;
			cnt += ft_select_format(ap, f);
		}
		else
		{
			ft_putchar(*str);
			cnt++;
		}
		str++;
	}
//	ft_print_format(*f);
	(*f)->len = cnt;
}

int		ft_parse_percent(char *str, t_format **f)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (*str && (*f)->conv == 0)
	{
		//printf("\n[DEBUG %s]\n", str);
		ft_check_flag(f, str);
		ft_check_modifier(f, str);
		ft_check_precision(f, str);
		ft_check_conv(f, str);
		ret = ft_check_size(f, str);
		if (ret > 0)
		{
			str += ret;
			i += ret;
		}
		str++;
		i++;
	}
	return (i);
}

int		ft_printf(const char *tmp, ...)
{
	va_list		ap;
	char		*str;
	int			rep;
	t_format	*f;

	va_start(ap, tmp);
	f = (t_format *)malloc(sizeof(t_format));
	str = (char *)malloc(sizeof(char) * (strlen(tmp)) + 1);
	str = strcpy(str, tmp);
	ft_save_string(str, &f, ap);
	va_end(ap);
	rep = f->len;
	return (rep);
}
