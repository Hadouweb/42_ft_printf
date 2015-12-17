/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_unicode.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:35:55 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 14:01:02 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_wchar(t_format *f, wchar_t *n)
{
	if (f->l % 2 == 0 && f->l > 0)
		*n = (unsigned long long)*n;
	else if (f->l % 2 != 0)
		*n = (unsigned long)*n;
	else if (f->j)
		*n = (uintmax_t) * n;
	else if (f->z)
		*n = (size_t)*n;
	else if (f->h % 2 != 0)
		*n = (unsigned long)*n;
	else if (f->h % 2 == 0 && f->h > 0)
		*n = (unsigned long)*n;
	else
		*n = (wchar_t)*n;
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
		(*f)->len += ft_putstr_len("(null)");
	else
	{
		str = (char *)malloc(ft_wlen(wstr) * sizeof(wchar_t) + 1);
		while (wstr[i])
		{
			cnt += ft_wconvert(str + cnt, wstr[i]);
			str[cnt] = '\0';
			i++;
		}
		ft_print_all_char(f, str);
	}
}

void	ft_join_all_wchar(t_format *f, char *align, char **str)
{
	if (align && !f->less)
		*str = ft_strjoin(align, *str);
	else if (align && f->less)
		*str = ft_strjoin(*str, align);

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
	ft_modif_type_wchar(*f, &w);
	str = (char*)malloc(sizeof(wchar_t) + 1);
	cnt = ft_wconvert(str, w);
	str[cnt] = '\0';
	if (w)
		ft_print_all_char(f, str);
	else
		(*f)->len += ft_putchar_len(0);
}