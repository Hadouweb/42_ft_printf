/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:47:22 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/12 05:53:07 by nle-bret         ###   ########.fr       */
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
	(*format)->h = 0;
	(*format)->l = 0;
	(*format)->j = 0;
	(*format)->z = 0;
	(*format)->prec = 0;
	(*format)->size = NULL;
	(*format)->conv = 0;
	(*format)->sign = 0;
	(*format)->str = NULL;
}

void	ft_check_flag(t_format **f, char *s)
{
	if (*s == '#')
		(*f)->sharp++;
	if (*s == '0')
		(*f)->zero++;
	if (*s == '-')
		(*f)->less++;
	if (*s == '+')
		(*f)->more++;
	if (*s == ' ')
		(*f)->space++;
}

void	ft_check_modifier(t_format **f, char *s)
{
	if (*s == 'h')
		(*f)->h++;
	if (*s == 'l')
		(*f)->l++;
	if (*s == 'j')
		(*f)->j++;
	if (*s == 'z')
		(*f)->z++;
}

void	ft_check_conv(t_format **f, char *s)
{
	if (*s == 'd' || *s == 'D' || *s == 'i' || *s == 'u' || *s == 'U'
			|| *s == 'o' || *s == 'O' || *s == 'x' || *s == 'X' || *s == 'c' 
			|| *s == 'C' || *s == 's' || *s == 'S' || *s == 'p')
		(*f)->conv = *s;
}

void	ft_check_precision(t_format **f, char *s)
{
	if (*s == '.' && ft_isdigit(*(s + 1)))
		(*f)->prec++;
}

int		ft_check_size(t_format **f, char *s)
{
	int		i;

	i = 0;
	if (*s >= '1' && *s <= '9')
	{
		while (*s && ft_isdigit(*s))
		{
			if (!(*f)->size)
			{
				(*f)->size = ft_memalloc(1);
				(*f)->size[0] = *s;
			}
			else
				(*f)->size = ft_stradd_char(&(*f)->size, *s);
			s++;
			i++;
		}
	}
	if (i > 0)
		i--;
	return (i);
}

int     ft_select_format(va_list ap, t_format **f)
{
	if ((*f)->conv == 'd' || (*f)->conv == 'i' || (*f)->conv == 'D')
		return (ft_format_int(ap, f));
	else if ((*f)->conv == 'o' || (*f)->conv == 'O')
		return (ft_format_byte(ap, f));
	else if ((*f)->conv == 'u' || (*f)->conv == 'U')
		return (ft_format_uint(ap, f));
	else if ((*f)->conv == 'x')
		return (ft_format_hexa(ap, f));
	else if ((*f)->conv == 'X')
		return (ft_format_hexaup(ap, f));
	else if ((*f)->conv == 'c')
		return (ft_format_char(ap, f));
	else if ((*f)->conv == 's')
		return (ft_format_str(ap, f));
	else if ((*f)->conv == 'S')
		return (ft_format_uni_many(ap, f));
	else if ((*f)->conv == 'C')
		return (ft_format_uni_one(ap, f));
	else if ((*f)->conv == 'p')
		return (ft_format_ptr(ap, f));
	else if ((*f)->conv == '%' || (*f)->conv == '}' || (*f)->conv == ' ')
		return (ft_format_percent(&(*f)->conv));
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
	printf("h  : %d\n", format->h);
	printf("l  : %d\n", format->l);
	printf("j  : %d\n", format->j);
	printf("z  : %d\n", format->z);
	printf("prec  : %d\n", format->prec);
	printf("size  : %s\n", format->size);
	printf("conv  : %c\n", format->conv);
	printf("len  : %d\n", format->len);
	printf("str  : %s\n", format->str);
}
