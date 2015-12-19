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
{//printf("ok1\n");
	if (!(*f)->less)
	{
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
		(*f)->len += ft_putstr_len(str);
	}
	if ((*f)->less)
	{
		(*f)->len += ft_putstr_len(str);
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	}
}

void	ft_print_zero_size_char(t_format **f, char *str)
{
	//printf("ok2\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_size_prec_char(t_format **f, char *str)
{//printf("ok3\n");
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	if (ft_strlen(str) > (size_t)(*f)->prec)
	{
		(*f)->size += (ft_strlen(str) - (size_t)(*f)->prec);
		if ((*f)->conv == 'S')
			(*f)->size += ((*f)->prec - ft_strlen(ft_check_str(*f, str)));
	}
	if ((*f)->zero)
		(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	else
		(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	(*f)->len += ft_putstr_len(ft_check_str(*f, str));
}

void	ft_print_default_char(t_format **f, char *str)
{//printf("ok4\n");
	if ((*f)->pnt)
		(*f)->len += ft_putstr_len(ft_check_str(*f, str));
	else
		(*f)->len += ft_putstr_len(str);
}

void	ft_print_noprec_nosize_char(t_format **f, char *str)
{//printf("ok5\n");
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	if (!((*f)->nbr == 0 && (*f)->pnt))
		(*f)->len += ft_putstr_len(str);
}
