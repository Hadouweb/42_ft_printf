/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_final.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 06:45:00 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 06:45:10 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_print_less_size(t_format **f, char *str)
{
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(str);
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
}

void 	ft_print_less_prec(t_format **f, char *str)
{
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_zero_prec(t_format **f, char *str)
{
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_size_prec(t_format **f, char *str)
{
	if ((*f)->sign && !((*f)->prec) && (*f)->size)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	if ((*f)->size > (*f)->prec)
	{
		(*f)->size -= ft_strlen(ft_adj_zero(*f, str));
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	}
	if ((*f)->sign && (*f)->prec && (*f)->size)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_default(t_format **f, char *str)
{
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	if (!((*f)->nbr == 0 && (*f)->pnt))
		(*f)->len += ft_putstr_len(str);
}
