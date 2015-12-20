/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_f.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 05:45:16 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 11:59:25 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_init(t_format **f)
{
	(*f)->sharp = 0;
	(*f)->zero = 0;
	(*f)->less = 0;
	(*f)->more = 0;
	(*f)->space = 0;
	(*f)->h = 0;
	(*f)->l = 0;
	(*f)->j = 0;
	(*f)->z = 0;
	(*f)->prec = 0;
	(*f)->pnt = 0;
	(*f)->size = 0;
	(*f)->conv = 0;
	(*f)->sign = 0;
	(*f)->nbr = -1;
	(*f)->wstr = NULL;
	(*f)->str = NULL;
	(*f)->star = 0;
}

void	ft_print_format(t_format *f)
{
	printf("f\n");
	printf("#  : %d\n", f->sharp);
	printf("0  : %d\n", f->zero);
	printf("-  : %d\n", f->less);
	printf("+  : %d\n", f->more);
	printf("   : %d\n", f->space);
	printf("h  : %d\n", f->h);
	printf("l  : %d\n", f->l);
	printf("j  : %d\n", f->j);
	printf("z  : %d\n", f->z);
	printf("prec  : %d\n", f->prec);
	printf("point  : %d\n", f->pnt);
	printf("nbr  : %lld\n", f->nbr);
	printf("size  : %d\n", f->size);
	printf("conv  : %c\n", f->conv);
	printf("len  : %d\n", f->len);
	printf("str  : %s\n", f->str);
	printf("wstr  : %S\n", f->wstr);
	printf("star  : %d\n", f->star);
	printf("fd  : %d\n", f->fd);
}
