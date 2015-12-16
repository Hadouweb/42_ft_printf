/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:36:54 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 02:27:25 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_print_size(t_format **f, char **str)
{
	int 	i;
	char	*news;

	i = ft_strlen(*str) - 1;
	news = ft_memalloc(i + 1);
	news = ft_strncpy(news, *str, i);
	ft_print_all(f, news);
	(*str) += i;
	return (0);
}

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
			if (ft_check_conv(f, str) || ft_parse_percent(str, f))
				ft_select_format(ap, f);
			else
			{
				if ((*f)->size)
					ft_print_size(f, str);
				if (**str)
					(*f)->len += ft_putchar_len(**str);
			}
			//else if (**str)
				//(*f)->len += ft_putchar_len(**str);
		}
		else
			(*f)->len += ft_putchar_len(**str);
		(*str)++;
	}
	//ft_print_format(*f);
}

int 	ft_parse_percent(char **str, t_format **f)
{
	int		ret;

	ret = 0;
	while (**str)
	{
		ret = 0;
		ret += ft_check_flag(f, str);
		ret += ft_check_modifier(f, str);
		ret += ft_check_precision(f, str);
		ret += ft_check_size(f, str);
		if (ft_check_conv(f, str))
			return (1);
		if (!ret)
			return (0);
	}
	return (0);
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
