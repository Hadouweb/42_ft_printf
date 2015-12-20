/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:33:29 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 18:09:53 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_str(va_list ap, t_format **f)
{
	char	*str;

	str = NULL;
	if ((*f)->conv == 's')
	{
		if ((*f)->l && (*f)->l % 2 != 0)
			ft_format_uni_many(ap, f);
		else
		{
			str = va_arg(ap, char*);
			if (!str)
				str = ft_strdup("(null)");
			ft_print_all_char(f, str);
		}
	}
	else if ((*f)->conv == 'c')
		ft_format_char(ap, f);
}

void	ft_format_char(va_list ap, t_format **f)
{
	char	c;
	char	*str;

	c = 0;
	str = NULL;
	if ((*f)->l && (*f)->l % 2 != 0)
		ft_format_uni_one(ap, f);
	else
	{
		c = va_arg(ap, int);
		if (ft_join_all_char(f, c))
			(*f)->len += ft_putchar_len(c, *f);
	}
}

void	ft_format_uni_one(va_list ap, t_format **f)
{
	wchar_t w;
	char	*str;
	size_t	cnt;
	int		size;

	size = 0;
	str = NULL;
	w = va_arg(ap, wchar_t);
	str = (char*)malloc(sizeof(wchar_t) + 1);
	cnt = ft_wconvert(str, w);
	str[cnt] = '\0';
	(*f)->space = 0;
	if (!w && !(*f)->size)
		(*f)->len += ft_putchar_len(0, *f);
	else
	{
		if (!w && (*f)->size)
		{
			(*f)->len++;
			(*f)->size--;
		}
		ft_print_all_char(f, str);
	}
}

void	ft_format_uni_many(va_list ap, t_format **f)
{
	char	*str;
	wchar_t *wstr;
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	wstr = va_arg(ap, wchar_t*);
	str = NULL;
	if (wstr == NULL)
	{
		str = ft_strdup("(null)");
		(*f)->conv = 's';
	}
	else
	{
		str = (char *)malloc(ft_wlen(wstr) * sizeof(wchar_t) + 1);
		(*f)->wstr = wstr;
		str = ft_wconvert_str(str, wstr);
	}
	ft_print_all_char(f, str);
}
