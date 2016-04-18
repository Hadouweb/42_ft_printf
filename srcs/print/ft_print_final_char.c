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

void	ft_print_size_char(t_format **f, char *str)
{
	if (!(*f)->less)
	{
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str), *f);
		(*f)->len += ft_putstr_len(str, *f);
	}
	if ((*f)->less)
	{
		(*f)->len += ft_putstr_len(str, *f);
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str), *f);
	}
}

void	ft_print_zero_size_char(t_format **f, char *str)
{
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign, *f);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str), *f);
	(*f)->len += ft_putstr_len(str, *f);
}

void	ft_print_size_prec_char(t_format **f, char *str)
{
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ", *f);
	if (ft_strlen(str) > (size_t)(*f)->prec)
	{
		(*f)->size += (ft_strlen(str) - (size_t)(*f)->prec);
		if ((*f)->conv == 'S')
			(*f)->size += ((*f)->prec - ft_strlen(ft_check_str(*f, str)));
	}
	if ((*f)->zero)
		(*f)->len += ft_putstr_len(ft_adj_zero(*f, str), *f);
	else
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str), *f);
	(*f)->len += ft_putstr_len(ft_check_str(*f, str), *f);
}

void	ft_print_default_char(t_format **f, char *str)
{
	if ((*f)->pnt)
		(*f)->len += ft_putstr_len(ft_check_str(*f, str), *f);
	else
		(*f)->len += ft_putstr_len(str, *f);
}

void	ft_print_noprec_nosize_char(t_format **f, char *str)
{
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str), *f);
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign, *f);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ", *f);
	if (!((*f)->nbr == 0 && (*f)->pnt))
		(*f)->len += ft_putstr_len(str, *f);
}
