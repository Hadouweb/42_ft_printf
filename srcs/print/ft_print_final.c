/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_final.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 06:45:00 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 17:58:04 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_less_size(t_format *f, char *str)
{
	char 	*zero;
	char	*space;
	//printf("ok1\n");
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
		f->len += ft_putstr_len_fd(" ", f->fd);
	if (f->sign)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	if (f->prec)
	{
		if (f->sign && f->conv != 'p' && (ft_strcmp(f->sign, "0X") == 0
			|| ft_strcmp(f->sign, "0x") == 0) && !f->less)
			f->prec += 2;
		zero = ft_adj_zero(f, str);
		f->len += ft_putstr_len_fd(zero, f->fd);
		f->size -= ft_strlen(zero);
		ft_strdel(&zero);
	}
	f->len += ft_putstr_len_fd(str, f->fd);
	space = ft_adj_space(f, str);
	f->len += ft_putstr_len_fd(space, f->fd);
	ft_strdel(&space);
}

void	ft_print_less_prec(t_format *f, char *str)
{
	char 	*zero;
//printf("ok2\n");
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
		f->len += ft_putstr_len_fd(" ", f->fd);
	if (f->sign)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	zero = ft_adj_zero(f, str);
	f->len += ft_putstr_len_fd(zero, f->fd);
	f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&zero);
}

void	ft_print_zero_prec(t_format *f, char *str)
{
	char 	*zero;
//printf("ok3\n");
	if (f->sign)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
		f->len += ft_putstr_len_fd(" ", f->fd);
	zero = ft_adj_zero(f, str);
	f->len += ft_putstr_len_fd(zero, f->fd);
	f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&zero);
}

void	ft_print_size_prec(t_format *f, char *str)
{
	char 	*zero;
	char	*space;
//printf("ok4\n");
	zero = ft_adj_zero(f, str);
	if (f->sign && !(f->prec) && f->size)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
		f->len += ft_putstr_len_fd(" ", f->fd);
	if (f->size > f->prec)
	{
		f->size -= ft_strlen(zero);
		space = ft_adj_space(f, str);
		f->len += ft_putstr_len_fd(space, f->fd);
		ft_strdel(&space);
	}
	if (f->sign && f->prec && f->size)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	f->len += ft_putstr_len_fd(zero, f->fd);
	f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&zero);
}

void	ft_print_default(t_format *f, char *str)
{
	char	*space;
//printf("ok5\n");
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
	{
		f->len += ft_putstr_len_fd(" ", f->fd);
		f->size--;
	}
	space = ft_adj_space(f, str);
	f->len += ft_putstr_len_fd(space, f->fd);
	if (f->sign)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	if (!(f->nbr == 0 && f->pnt))
		f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&space);
}
