/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:36:54 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/14 07:50:51 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_print_size(t_format **f, char *str)
{
	int 	size;
	char 	*align;
	int 	i;
	char	*news;
	
	i = ft_strlen(str) - 1;
	news = ft_memalloc(i + 1);
	news = ft_strncpy(news, str, i);
	size = ft_atoi((*f)->size) - 1;
	align = ft_strsize(*f, size);
	ft_join_all(*f, align, &news);
	(*f)->len += ft_putstr_len(news);
	return (i);
}

void	ft_save_string(char *str, t_format **f, va_list ap)
{
	size_t	i;

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
				if (!ft_select_format(ap, f))
				{
					if ((*f)->size)
						str += ft_print_size(f, str);
					(*f)->len += ft_putchar_len(*str);
				}
			}
			else if (*str)
				(*f)->len += ft_putchar_len(*str);
		}
		else
			(*f)->len += ft_putchar_len(*str);
		str++;
	}
	//ft_print_format(*f);
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
	t_format	*f;

	va_start(ap, tmp);
	f = (t_format *)malloc(sizeof(t_format));
	f->len = 0;
	str = (char *)malloc(sizeof(char) * (strlen(tmp)) + 1);
	str = strcpy(str, tmp);
	ft_save_string(str, &f, ap);
	va_end(ap);
	return (f->len);
}
