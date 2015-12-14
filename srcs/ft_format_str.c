/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:33:29 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/14 06:56:31 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_str(va_list ap, t_format **f)
{
	char	*str;
	int		size;

	str = NULL;
	size = 0;
	if ((*f)->conv == 's')
	{
		if ((*f)->l)
			ft_format_uni_many(ap, f);
		else
		{
			str = va_arg(ap, char*);
			if (!str)
				str = "(null)";
			if ((*f)->size)
			{
				size = ft_atoi((*f)->size) - ft_strlen(str);
				ft_join_all(*f, ft_strsize(*f, size), &str);
			}
			(*f)->len += ft_putstr_len(str);
		}
	}
	else if ((*f)->conv == 'c')
		ft_format_char(ap, f);
}

void	ft_format_char(va_list ap, t_format **f)
{
	char 	c;
	char 	*align;
	int		size;
	char 	*str;

	c = 0;
	size = 0;
	align = NULL;
	str = NULL;
	if ((*f)->l)
		ft_format_uni_one(ap, f);
	else
	{
		c = va_arg(ap, int);
		if ((*f)->size)
		{
			size = ft_atoi((*f)->size) - 1;
			str = ft_join_all_char(*f, ft_strsize(*f, size), c);
		}
		else
			(*f)->len += ft_putchar_len(c);
	}
}

char	*ft_join_all_char(t_format *f, char *align, char c)
{
	char 	*str;

	str = NULL;
	if (align && !f->prec)
	{
		f->len += ft_putstr_len(align);
		f->len += ft_putchar_len(c);
	}
	else if (align && f->less)
	{
		f->len += ft_putchar_len(c);
		f->len += ft_putstr_len(align);
	}
	return (str);
}