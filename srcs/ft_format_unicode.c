/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_unicode.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:35:55 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:41:50 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_uni_many(va_list ap, t_format **f)
{
	char	*str;
	wchar_t *wstr;
	size_t	cnt;
	size_t	i;

	(*f)->conv = 0;
	i = 0;
	cnt = 0;
	wstr = va_arg(ap, wchar_t*);
	str = NULL;
	if (wstr == NULL)
		(*f)->len += ft_putstr_len("(null)");
	else
	{
		str = (char *)malloc(ft_wlen(wstr) * sizeof(wchar_t) + 1);
		while (wstr[i])
		{
			cnt += ft_wconvert(str + cnt, wstr[i]);
			i++;
		}
		(*f)->len += ft_putstr_len(str);
	}
}

void	ft_format_uni_one(va_list ap, t_format **f)
{
	wchar_t w;
	char	*str;
	size_t	cnt;

	(*f)->conv = 0;
	w = va_arg(ap, wchar_t);
	str = NULL;
	str = (char*)malloc(sizeof(wchar_t) + 1);
	cnt = ft_wconvert(str, w);
	(*f)->len += ft_putstr_len(str);
}
