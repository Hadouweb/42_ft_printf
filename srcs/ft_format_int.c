/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:29:24 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 02:31:39 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type(t_format *f, long long *n)
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
	(*f)->space = ((*f)->more) ? 0 : (*f)->space;
	(*f)->zero = ((*f)->less) ? 0 : (*f)->zero;
}

int		ft_format_int(va_list ap, t_format **f)
{
	long long	n;
	char		*str;
	int			size;
	char		*align;

	size = 0;
	ft_check_flag_int(f);
	n = va_arg(ap, long long);
	if ((*f)->conv == 'D')
		(*f)->l = 1;
	else
		ft_modif_type(*f, &n);
	str = ft_itoa_base(n, 10, 0);
	if (n < 0)
	{
		(*f)->sign = ft_strdup("-");
		str = ft_strdup(&str[1]);
	}
	(*f)->sign = (!(*f)->sign && (*f)->more) ? ft_strdup("+") : (*f)->sign;
	if ((*f)->size)
		size = ft_atoi((*f)->size) - ft_strlen(str);
	align = ft_strsize(*f, size);
	//printf("%d\n", size);
	ft_join_all(*f, align, &str);
	ft_putstr(str);
	(*f)->len = ft_strlen(str);
	return ((*f)->len);
}

void	ft_join_all(t_format *f, char *align, char **str)
{
	if (align && (f->zero || f->prec))
	{
		*str = ft_strjoin(align, *str);
		if (f->sign)
			*str = ft_strjoin(f->sign, *str);
	}
	else if (align && f->less)
	{
		*str = ft_strjoin(*str, align);
		if (f->sign)
			*str = ft_strjoin(f->sign, *str);
	}
	else if (align && !f->prec)
	{
		if (f->sign)
			*str = ft_strjoin(f->sign, *str);
		*str = ft_strjoin(align, *str);
	}
	else if (f->sign)
		*str = ft_strjoin(f->sign, *str);
}

char	*ft_strsize(t_format *f, int size)
{
	char	c;
	char	*align;

	align = NULL;
	if ((!f->prec && f->more))
		size--;
	else if (f->sign && f->sign[0] == '-' && !f->prec)
		size--;
	if ((f->space || f->size) && !f->zero && !f->prec)
		c = ' ';
	else
		c = '0';
	if (size > 0)
	{
		align = ft_memalloc(size + 1);
		align = (char *)ft_memset(align, c, size);
		align[size] = '\0';
	}
	return (align);
}
