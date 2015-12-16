/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:33:29 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 02:30:29 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_str(va_list ap, t_format **f)
{
	char	*str;

	str = NULL;
	if ((*f)->conv == 's')
	{
		if ((*f)->l)
			ft_format_uni_many(ap, f);
		else
		{
			str = va_arg(ap, char*);
			if (!str)
				str = "(null)";
			ft_print_all_char(f, str);
		}
	}
	else if ((*f)->conv == 'c')
		ft_format_char(ap, f);
}

void	ft_format_char(va_list ap, t_format **f)
{
	char 	c;
	char 	*str;

	c = 0;
	str = NULL;
	if ((*f)->l)
		ft_format_uni_one(ap, f);
	else
	{
		c = va_arg(ap, int);
		if (ft_join_all_char(f, c))
			(*f)->len += ft_putchar_len(c);
	}
}

char	*ft_check_str(t_format *f, char *str)
{
	char	*adj;
	int 	size;

	adj = NULL;
	size = f->prec;
	if (size > 0)
	{
		adj = ft_memalloc(size + 1);
		ft_strncpy(adj, str, size);
		adj[size] = '\0';
	}
	return (adj);
}

void 	ft_print_less_size_char(t_format **f, char *str)
{// Si less et size
	//printf("|1|\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(str);
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
}

void 	ft_print_less_prec_char(t_format **f, char *str)
{// Si less et prec
	//printf("|2|\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_size_prec_char(t_format **f, char *str)
{// Si size
	//printf("|3|\n");
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	//printf("%d %d\n", (*f)->size, (*f)->prec);
	if (ft_strlen(str) > (size_t)(*f)->prec)
		(*f)->size += (ft_strlen(str) - (size_t)(*f)->prec);
 	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	(*f)->len += ft_putstr_len(ft_check_str(*f, str));
}

void	ft_print_prec_char(t_format **f, char *str)
{// Si prec
	//printf("|4|\n");
	(*f)->len += ft_putstr_len(ft_check_str(*f, str));
}

void	ft_print_default_char(t_format **f, char *str)
{// Si pas de prec ni de 0
	//printf("|5|\n");
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	if (!((*f)->nbr == 0 && (*f)->pnt))
		(*f)->len += ft_putstr_len(str);
}

void 	ft_print_all_char(t_format **f, char *str)
{
	if (!(*f)->less)
	{
		if ((!(*f)->prec && !(*f)->zero && !(*f)->pnt && !(*f)->size))
			ft_print_default_char(f, str);
		if ((*f)->prec && !(*f)->size)
			ft_print_prec_char(f, str);
		if ((*f)->pnt && (*f)->size)
			ft_print_size_prec_char(f, str);
	}
	if ((*f)->less)
	{

	}
}

char	*ft_adj_char(t_format *f, char c)
{
	char	*adj;
	int 	size;

	size = f->size - 1;
	if (f->sign)
		size--;
	adj = NULL;
	if (size > 0)
	{
		adj = ft_memalloc(size + 1);
		ft_memset(adj, c, size);
		adj[size] = '\0';
	}
	return (adj);
}

int 	ft_join_all_char(t_format **f, char c)
{
	char 	*adj;
	char 	l;

	if ((*f)->zero)
		l = '0';
	else
		l = ' ';
	adj = ft_adj_char(*f, l);
	if ((*f)->size && adj)
	{
		(*f)->len += ft_putstr_len(adj);
		(*f)->len += ft_putchar_len(c);
		return (0);
	}
	return (1);
}
