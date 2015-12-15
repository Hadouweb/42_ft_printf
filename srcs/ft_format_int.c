/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:29:24 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/15 05:19:44 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_int(t_format *f, long long *n)
{
	if (f->l % 2 == 0 && f->l > 0)
		*n = (long long)*n;
	else if (f->l % 2 != 0)
		*n = (long)*n;
	else if (f->j)
		*n = (intmax_t) * n;
	else if (f->z)
		*n = (size_t)*n;
	else if (f->h % 2 != 0)
		*n = (short)*n;
	else if (f->h % 2 == 0 && f->h > 0)
		*n = (signed char)*n;
	else
		*n = (int)*n;
}

void	ft_check_flag_int(t_format **f)
{
	(*f)->sharp = 0;
	//(*f)->space = ((*f)->more) ? 0 : (*f)->space;
	//(*f)->zero = ((*f)->less) ? 0 : (*f)->zero;
}

void	ft_format_int(va_list ap, t_format **f)
{
	long long	n;
	char		*str;
	int			size;

	size = 0;
	ft_check_flag_int(f);
	n = va_arg(ap, long long);
	if ((*f)->conv == 'D')
		(*f)->l = 1;
	else
		ft_modif_type_int(*f, &n);
	str = ft_itoa_base(n, 10, 0);
	if (n < 0)
	{
		(*f)->sign = ft_strdup("-");
		str = ft_strdup(&str[1]);
	}
	(*f)->sign = (!(*f)->sign && (*f)->more) ? ft_strdup("+") : (*f)->sign;

	ft_join_all(*f, &str);
	(*f)->len += ft_putstr_len(str);
}

char	*ft_adj(t_format *f, char *str, char c)
{
	char	*adj;
	int 	size;

	size = f->size - ft_strlen(str);
	if (f->sign)
		size -= ft_strlen(f->sign);
	adj = NULL;
	if (size > 0)
	{
		adj = ft_memalloc(size + 1);
		ft_memset(adj, c, size);
		adj[size] = '\0';
	}
	else
	{
		f->size = 0;
	}
	return (adj);
}

void	ft_join_zero(t_format *f, char *adj, char **str)
{
	//if (f->zero)
	if (f->prec || f->zero)
	{
		*str = ft_strjoin(adj, *str);
		if (f->sign)
			*str = ft_strjoin(f->sign, *str);
	}
}

void	ft_join_space(t_format *f, char *adj, char **str)
{
	if (f->space)
		*str = ft_strjoin(" ", *str);
	else
	{
		if (f->sign)
			*str = ft_strjoin(f->sign, *str);
		if (!f->less)
			*str = ft_strjoin(adj, *str);
		if (f->less)
			*str = ft_strjoin(*str, adj);

	}
}

void	ft_join_all(t_format *f, char **str)
{
	char 	*adj;

	adj = NULL;
	if ((adj = ft_adj(f, *str, ' ')) && f->size && !f->zero)
	{
		ft_join_space(f, adj, str);
	}
	if ((adj = ft_adj(f, *str, '0')) && (f->prec || f->zero))
	{
		ft_join_zero(f, adj, str);
	}
	if (f->sign && !f->prec && !f->size)
		*str = ft_strjoin(f->sign, *str);
}