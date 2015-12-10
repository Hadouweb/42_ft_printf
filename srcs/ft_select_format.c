/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:47:22 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 06:19:50 by nle-bret         ###   ########.fr       */
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
	(*format)->len = 0;
	(*format)->conv = 0;
	(*format)->str = NULL;
}

int		ft_check_flag(t_format **format, char *s)
{
	if (*s == '#')
		(*format)->sharp = 1;
	if (*s == '0')
		(*format)->zero = 1;
	if (*s == '-')
		(*format)->less = 1;
	if (*s == '+')
		(*format)->more = 1;
	if (*s == ' ')
		(*format)->space = 1;
	if (*s == '#' || *s == '0' || *s == '-' || *s == '+' || *s == ' ')
		return (1);
	return (0);
}
/*
void	ft_check_modifier(t_format **format, char *s)
{
	(*format)->hh = (s[0] == 'h' && s[1] == 'h') ? 1 : 0;
	(*format)->h = (s[0] == 'h' && s[1] != 'h') ? 1 : 0;
	(*format)->ll = (s[0] == 'l' && s[1] == 'l') ? 1 : 0;
	(*format)->l = (s[0] == 'l' && s[1] != 'l') ? 1 : 0;
	(*format)->j = (s[0] == 'j') ? 1 : 0;
	(*format)->z = (s[0] == 'z') ? 1 : 0;

}*/

int     ft_select_format(va_list ap, char *c)
{
    if (*c == 'd' || *c == 'i' || *c == 'D')
        return (ft_format_int(ap, *c));
    else if (*c == 'o' || *c == 'O')
        return (ft_format_byte(ap));
    else if (*c == 'u' || *c == 'U')
        return (ft_format_uint(ap));
    else if (*c == 'x')
        return (ft_format_hexa(ap));
    else if (*c == 'X')
        return (ft_format_hexaup(ap));
    else if (*c == 'c')
        return (ft_format_char(ap));
    else if (*c == 's')
        return (ft_format_str(ap));
    else if (*c == 'S')
        return (ft_format_uni_many(ap));
    else if (*c == 'C')
        return (ft_format_uni_one(ap));
    else if (*c == 'p')
        return (ft_format_ptr(ap));
    else if (*c == '%' || *c == '}' || *c == ' ')
        return (ft_format_percent(c));
    return (-1);
}

void	ft_print_format(t_format *format)
{
	printf("FORMAT\n");
	printf("#  : %d\n", format->sharp);
	printf("0  : %d\n", format->zero);
	printf("-  : %d\n", format->less);
	printf("+  : %d\n", format->more);
	printf("   : %d\n", format->space);
	/*printf("hh : %d\n", format->hh);
	printf("h  : %d\n", format->h);
	printf("ll : %d\n", format->ll);
	printf("l  : %d\n", format->l);
	printf("j  : %d\n", format->j);
	printf("z  : %d\n", format->z);
	printf("len  : %d\n", format->len);
	printf("str  : %s\n", format->str);*/
}
