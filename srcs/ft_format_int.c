/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 05:35:07 by nle-bret         ###   ########.fr       */
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

int     ft_format_int(va_list ap, t_format *f)
{
	long long	n;
	char		*str;
	int			size;

	size = 0;
	n = va_arg(ap, long long);
	if (f->conv == 'D')
		f->l = 1;
	else
		ft_modif_type(f, &n);
	str = ft_itoa_base(n, 10, 0);
	if (f->size || f->prec)
		size = (f->size) ? ft_atoi(f->size) : ft_atoi(f->prec);
	if (size > 0)
		ft_strsize(&str, f, size);
	if (f->more && !size)
		str = ft_strjoin("+", str);
	if (f->space && n >= 0)
		str = ft_strjoin(" ", str);
	ft_putstr(str);
	return (ft_strlen(str));
}

void	ft_strsize(char **str, t_format *f, int size)
{
	int		i;
	char	*c;

	i = size - ft_strlen(*str);
	if (f->space || (f->size && !f->zero) || f->less)
		c = " ";
	else
		c = "0";
	if (f->less)
		while (i-- > 0)
			*str = ft_strjoin(*str, c);
	else
		while (i-- > 0)
			*str = ft_strjoin(c, *str);
	if (f->more && size > 0 && c[0] == '0')
		*str[0] = '+';
}
