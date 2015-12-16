/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_final.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 06:45:00 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 23:46:55 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_print_less_size(t_format **f, char *str)
{	//printf("ok1\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->prec)
	{
		if ((*f)->sign && (ft_strcmp((*f)->sign, "0X") == 0 || ft_strcmp((*f)->sign, "0x") == 0))
			 (*f)->prec += 2;
		(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
		(*f)->size -= ft_strlen(ft_adj_zero(*f, str));
	}
	(*f)->len += ft_putstr_len(str);
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
}

void 	ft_print_less_prec(t_format **f, char *str)
{	//printf("ok2\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_zero_prec(t_format **f, char *str)
{
	//printf("ok3\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_size_prec(t_format **f, char *str)
{	//printf("ok4\n");
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
{	//printf("ok5\n");
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	if (!((*f)->nbr == 0 && (*f)->pnt))
		(*f)->len += ft_putstr_len(str);
}
