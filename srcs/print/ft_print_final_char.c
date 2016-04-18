/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_final_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:29:48 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 16:25:47 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_size_char(t_format *f, char *str)
{
	char	*space;

	space = ft_adj_space(f, str);
	if (!f->less)
	{
		f->len += ft_putstr_len_fd(space, f->fd);
		f->len += ft_putstr_len_fd(str, f->fd);
	}
	if (f->less)
	{
		f->len += ft_putstr_len_fd(str, f->fd);
		f->len += ft_putstr_len_fd(space, f->fd);
	}
	ft_strdel(&space);
}

void	ft_print_zero_size_char(t_format *f, char *str)
{
	char 	*zero;

	if (f->sign)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	zero = ft_adj_zero(f, str);
	f->len += ft_putstr_len_fd(zero, f->fd);
	f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&zero);
}

void	ft_print_size_prec_char(t_format *f, char *str)
{
	char 	*zero;
	char	*check_str;
	char	*space;

	check_str = ft_check_str(f, str);
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
		f->len += ft_putstr_len_fd(" ", f->fd);
	if (ft_strlen(str) > (size_t)f->prec)
	{
		f->size += (ft_strlen(str) - (size_t)f->prec);
		if (f->conv == 'S')
			f->size += (f->prec - ft_strlen(check_str));
	}
	if (f->zero)
	{
		zero = ft_adj_zero(f, str);
		f->len += ft_putstr_len_fd(zero, f->fd);
		ft_strdel(&zero);
	}
	else
	{
		space = ft_adj_space(f, str);
		f->len += ft_putstr_len_fd(space, f->fd);
		ft_strdel(&space);
	}
	f->len += ft_putstr_len_fd(check_str, f->fd);
	ft_strdel(&check_str);
}

void	ft_print_default_char(t_format *f, char *str)
{
	char	*check_str;

	check_str = ft_check_str(f, str);
	if (f->pnt)
		f->len += ft_putstr_len_fd(check_str, f->fd);
	else
		f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&check_str);
}

void	ft_print_noprec_nosize_char(t_format *f, char *str)
{
	char	*space;

	space = ft_adj_space(f, str);
	f->len += ft_putstr_len_fd(space, f->fd);
	if (f->sign)
		f->len += ft_putstr_len_fd(f->sign, f->fd);
	if (f->space && !f->sign && ft_strcmp(str, "(null)") && str[0])
		f->len += ft_putstr_len_fd(" ", f->fd);
	if (!(f->nbr == 0 && f->pnt))
		f->len += ft_putstr_len_fd(str, f->fd);
	ft_strdel(&space);
}
