/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:37:33 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/15 07:59:05 by nle-bret         ###   ########.fr       */
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
	(*format)->size = 0;
	(*format)->conv = 0;
	(*format)->sign = 0;
	(*format)->nbr = -1;
	(*format)->str = NULL;
}

int		ft_check_flag(t_format **f, char **s)
{
	if (**s == '#')
		(*f)->sharp++;
	else if (**s == '0')
		(*f)->zero++;
	else if (**s == '-')
		(*f)->less++;
	else if (**s == '+')
		(*f)->more++;
	else if (**s == ' ')
		(*f)->space++;
	else
		return (0);
	(*s)++;
	return (1);
}

int		ft_check_modifier(t_format **f, char **s)
{
	if (**s == 'h')
		(*f)->h++;
	else if (**s == 'l')
		(*f)->l++;
	else if (**s == 'j')
		(*f)->j++;
	else if (**s == 'z')
		(*f)->z++;
	else
		return (0);
	(*s)++;
	return (1);
}

int		ft_check_conv(t_format **f, char **s)
{
	if (**s == 'd' || **s == 'D' || **s == 'i' || **s == 'u' || **s == 'U'
		|| **s == 'o' || **s == 'O' || **s == 'x' || **s == 'X' || **s == 'c'
		|| **s == 'C' || **s == 's' || **s == 'S' || **s == 'p' || **s == '%')
	{
		(*f)->conv = **s;
		return (1);
	}
	return (0);
}

int		ft_check_precision(t_format **f, char **s)
{
	char 	*prec;

	prec = NULL;
	if (**s == '.')
	{
		if (ft_isdigit(*(*s + 1)))
		{
			(*s)++;
			while (**s && ft_isdigit(**s))
			{
				if (!prec)
				{
					prec = ft_memalloc(2);
					prec[0] = **s;
					prec[1] = '\0';
				}
				else
					prec = ft_stradd_char(&prec, **s);
				(*s)++;
			}
			(*f)->prec = ft_atoi(prec);
			ft_strdel(&prec);
		}
		else
			(*s)++;
		return (1);
	}
	return (0);
}

int		ft_check_size(t_format **f, char **s)
{
	char 	*size;

	size = NULL;
	if (**s >= '1' && **s <= '9')
	{
		while (**s && ft_isdigit(**s))
		{
			if (!size)
			{
				size = ft_memalloc(2);
				size[0] = **s;
				size[1] = '\0';
			}
			else
				size = ft_stradd_char(&size, **s);
			(*s)++;
		}
		(*f)->size = ft_atoi(size);
		ft_strdel(&size);
		return (1);
	}
	return (0);
}

int		ft_select_format(va_list ap, t_format **f)
{
	if ((*f)->conv == 'd' || (*f)->conv == 'i' || (*f)->conv == 'D')
		ft_format_int(ap, f);
	else if ((*f)->conv == 'o' || (*f)->conv == 'O')
		ft_format_byte(ap, f);
	else if ((*f)->conv == 'u' || (*f)->conv == 'U')
		ft_format_uint(ap, f);
	else if ((*f)->conv == 'x')
		ft_format_hexa(ap, f);
	else if ((*f)->conv == 'X')
		ft_format_hexaup(ap, f);
	else if ((*f)->conv == 'c' || (*f)->conv == 's')
		ft_format_str(ap, f);
	else if ((*f)->conv == 'S')
		ft_format_uni_many(ap, f);
	else if ((*f)->conv == 'C')
		ft_format_uni_one(ap, f);
	else if ((*f)->conv == 'p')
		ft_format_ptr(ap, f);
	else if ((*f)->conv == '%' || (*f)->conv == '}' || (*f)->conv == ' ')
		ft_format_percent(f);
	else
		return (0);
	return (1);
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
	printf("nbr  : %lld\n", format->nbr);
	printf("size  : %d\n", format->size);
	printf("conv  : %c\n", format->conv);
	printf("len  : %d\n", format->len);
	printf("str  : %s\n", format->str);
}
