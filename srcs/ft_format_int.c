/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 07:14:51 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type(t_format *f, long long *n)
{
	if (f->hh)
		*n = (signed char)*n;
	else if (f->h)
		*n = (short)*n;
	else if (f->l)
		*n = (long)*n;
	else if (f->ll)
		*n = (long long)*n;
	else if (f->j)
		*n = (intmax_t)*n;
	else
		*n = (int)*n;
}

void	ft_check_flag_int(t_format **f)
{
	(*f)->sharp = 0;
	(*f)->space = ((*f)->more) ? 0 : (*f)->space;
	(*f)->zero = ((*f)->less) ? 0 : (*f)->zero;
}

int     ft_format_int(va_list ap, t_format **f)
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
		ft_modif_type(*f, &n);
	str = ft_itoa_base(n, 10, 0);
	if (!(*f)->prec && (*f)->more && (*f)->size && !(*f)->zero)
		str = ft_strjoin("+", str);
	if ((*f)->space)
		str = ft_strjoin(" ", str);
	if ((*f)->prec)
		size = ft_atoi((*f)->prec) - ft_strlen(str);
	if ((*f)->size)
		size = ft_atoi((*f)->size) - ft_strlen(str);
	if (size > 0)
		ft_strsize(&str, *f, size);
	if ((*f)->more && !(*f)->size && n > 0)
		str = ft_strjoin("+", str);
	ft_putstr(str);
	return (ft_strlen(str));
}

void	ft_strsize(char **str, t_format *f, int size)
{
	char	*c;
	int		i;
	int		rest;

	rest = size;
	if ((f->space || f->size) && !f->zero)
		c = " ";
	else
		c = "0";
	i = 0;
	if (*str[0] == '+')
		i++;
	if (f->less && !f->prec)
		while (size-- > 0)
			*str = ft_strjoin(*str, c);
	else
		while (size-- > 0)
			*str = ft_strjoin(c, *str);
	if (f->more && f->zero && rest > 0)
		*str[0] = '+';
}
