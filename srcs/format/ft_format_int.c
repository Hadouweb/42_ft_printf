/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:29:24 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 06:44:22 by nle-bret         ###   ########.fr       */
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

void	ft_format_int(va_list ap, t_format **f)
{
	long long	n;
	char		*str;
	int			size;

	size = 0;
	n = va_arg(ap, long long);
	(*f)->nbr = n;
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
	if (n == 0 && !(*f)->less && !(*f)->more && !((*f)->size && (*f)->prec))
		(*f)->size--;
	ft_print_all(f, str);
}