/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 05:45:16 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/18 10:42:39 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_init(t_format **format)
{
	(*format)->sharp = 0;
	(*format)->zero = 0;
	(*format)->less = 0;
	(*format)->more = 0;
	(*format)->space = 0;
	(*format)->h = 0;
	(*format)->l = 0;
	(*format)->j = 0;
	(*format)->z = 0;
	(*format)->prec = 0;
	(*format)->pnt = 0;
	(*format)->size = 0;
	(*format)->conv = 0;
	(*format)->sign = 0;
	(*format)->nbr = -1;
	(*format)->wstr = NULL;
	(*format)->str = NULL;
}

void	ft_print_format(t_format *format)
{
	printf("FORMAT\n");
	printf("#  : %d\n", format->sharp);
	printf("0  : %d\n", format->zero);
	printf("-  : %d\n", format->less);
	printf("+  : %d\n", format->more);
	printf("   : %d\n", format->space);
	printf("h  : %d\n", format->h);
	printf("l  : %d\n", format->l);
	printf("j  : %d\n", format->j);
	printf("z  : %d\n", format->z);
	printf("prec  : %d\n", format->prec);
	printf("point  : %d\n", format->pnt);
	printf("nbr  : %lld\n", format->nbr);
	printf("size  : %d\n", format->size);
	printf("conv  : %c\n", format->conv);
	printf("len  : %d\n", format->len);
	printf("str  : %s\n", format->str);
	printf("wstr  : %S\n", format->wstr);
}
