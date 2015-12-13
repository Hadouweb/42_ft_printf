/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:36:54 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 05:46:42 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_save_string(char *str, t_format **f, va_list ap)
{
	size_t	i;
	size_t	cnt;

	cnt = 0;
	while (*str)
	{
		i = 0;
		if (*str == '%')
		{
			ft_format_init(f);
			str++;
			if (ft_check_conv(f, str) || (i = ft_parse_percent(str, f)) > 0)
			{
				str += i;
				cnt += ft_select_format(ap, f);
			}
			else if (*str)
			{
				ft_putchar(*str);
				cnt++;
			}
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
	int		size;

	i = 0;
	ret = 0;
	while (*str)
	{
		if (ft_check_conv(f, str))
			return (i);
		ret = 0;
		size = 0;
		ret += ft_check_flag(f, str);
		ret += ft_check_modifier(f, str);
		ret += ft_check_precision(f, str);
		if ((size = ft_check_size(f, str)) > 0)
			ret += size;
		if (!ret)
			return (i);
		str += ret;
		i += ret;
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
