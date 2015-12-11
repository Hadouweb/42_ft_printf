/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:44:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 01:36:49 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_int(va_list ap, t_format *f)
{
	int     n;
	int		i;
	char	*str;
	char	*c;
	int		s;

	s = 0;
	if (f->conv == 'D')
		return (ft_format_D(ap, f));
	i = 0;
	f->conv = 0;
	n = va_arg(ap, int);
	str = ft_itoa_base(n, 10, 0);
	if (f->space || (f->size && !f->zero))
		c = " ";
	else
		c = "0";
	if (f->size)
		s = ft_atoi(f->size);
	if (f->prec)
		s = ft_atoi(f->prec);
	if (s > 0)
	{
		i = s - ft_strlen(str);
		while (i > 0)
		{
			str = ft_strjoin(c, str);
			i--;
		}
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int		ft_format_D(va_list ap, t_format *f)
{
	long	n;
	int		i;
	char	*str;
	char	*c;
	int		s;

	s = 0;
	i = 0;
	f->conv = 0;
	n = va_arg(ap, long);
	str = ft_itoa_base(n, 10, 0);
	if (f->space || (f->size && !f->zero))
		c = " ";
	else
		c = "0";
	if (f->size)
		s = ft_atoi(f->size);
	if (f->prec)
		s = ft_atoi(f->prec);
	if (s > 0)
	{
		i = s - ft_strlen(str);
		while (i > 0)
		{
			str = ft_strjoin(c, str);
			i--;
		}
	}
	ft_putstr(str);
	return (ft_strlen(str));
}
