/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:33:29 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/15 05:06:47 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_str(va_list ap, t_format **f)
{
	char	*str;

	str = NULL;
	if ((*f)->conv == 's')
	{
		if ((*f)->l)
			ft_format_uni_many(ap, f);
		else
		{
			str = va_arg(ap, char*);
			if (!str)
				str = "(null)";
			ft_join_all(*f, &str);
			(*f)->len += ft_putstr_len(str);
		}
	}
	else if ((*f)->conv == 'c')
		ft_format_char(ap, f);
}

void	ft_format_char(va_list ap, t_format **f)
{
	char 	c;
	char 	*str;

	c = 0;
	str = NULL;
	if ((*f)->l)
		ft_format_uni_one(ap, f);
	else
	{
		c = va_arg(ap, int);
		if (ft_join_all_char(f, c))
			(*f)->len += ft_putchar_len(c);
	}
}

char	*ft_adj_char(t_format *f, char c)
{
	char	*adj;
	int 	size;

	size = f->size - 1;
	if (f->sign)
		size--;
	adj = NULL;
	if (size > 0)
	{
		adj = ft_memalloc(size + 1);
		ft_memset(adj, c, size);
		adj[size] = '\0';
	}
	return (adj);
}

int 	ft_join_all_char(t_format **f, char c)
{
	char 	*adj;
	char 	l;

	if ((*f)->zero)
		l = '0';
	else
		l = ' ';
	adj = ft_adj_char(*f, l);
	if ((*f)->size && adj)
	{
		(*f)->len += ft_putstr_len(adj);
		(*f)->len += ft_putchar_len(c);
		return (0);
	}
	return (1);
}