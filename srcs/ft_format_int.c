/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:29:24 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 01:33:41 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_modif_type_int(t_format *f, long long *n)
{
	if (f->l % 2 == 0 && f->l > 0)
		*n = (long long)*n;
	else if (f->l % 2 != 0)
		*n = (long)*n;
	else if (f->j)
		*n = (intmax_t) * n;
	else if (f->z)
		*n = (size_t)*n;
	else if (f->h % 2 != 0)
		*n = (short)*n;
	else if (f->h % 2 == 0 && f->h > 0)
		*n = (signed char)*n;
	else
		*n = (int)*n;
}

void	ft_check_flag_int(t_format **f)
{
	(*f)->sharp = 0;
	//(*f)->space = ((*f)->more) ? 0 : (*f)->space;
	//(*f)->zero = ((*f)->less) ? 0 : (*f)->zero;
}

void	ft_format_int(va_list ap, t_format **f)
{
	long long	n;
	char		*str;
	int			size;

	size = 0;
	//ft_check_flag_int(f);
	n = va_arg(ap, long long);
	(*f)->nbr = n;
	if ((*f)->conv == 'D')
		(*f)->l = 1;
	else
		ft_modif_type_int(*f, &n);
	str = ft_itoa_base(n, 10, 0);
	if (n < 0)
	{
		(*f)->sign = ft_strdup("-");
		str = ft_strdup(&str[1]);
	}
	(*f)->sign = (!(*f)->sign && (*f)->more) ? ft_strdup("+") : (*f)->sign;
	if (n == 0 && !(*f)->less && !(*f)->more && !((*f)->size && (*f)->prec))
		(*f)->size--;
	ft_print_all(f, str);
}

char	*ft_adj_zero(t_format *f, char *str)
{
	char	*adj;
	int 	size;

	if (f->size && f->zero)
		size = f->size - ft_strlen(str);
	if (f->prec)
		size = f->prec - ft_strlen(str);
	if (f->sign && f->zero)
		size -= ft_strlen(f->sign);
	adj = NULL;
	if (size > 0)
	{
		adj = ft_memalloc(size + 1);
		ft_memset(adj, '0', size);
		adj[size] = '\0';
	}
	return (adj);
}

char	*ft_adj_space(t_format *f, char *str)
{
	char	*adj;
	int 	size;

	size = f->size - ft_strlen(str);
	if (f->sign)
		size -= ft_strlen(f->sign);
	adj = NULL;
	if (size > 0)
	{
		adj = ft_memalloc(size + 1);
		ft_memset(adj, ' ', size);
		adj[size] = '\0';
	}
	return (adj);
}

void 	ft_print_less_size(t_format **f, char *str)
{// Si less et size
	//printf("|1|\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(str);
	(*f)->len += ft_putstr_len(ft_adj_space(*f, str));
}

void 	ft_print_less_prec(t_format **f, char *str)
{// Si less et prec
	//printf("|2|\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_zero_prec(t_format **f, char *str)
{// Si zero et prec
	//printf("|3|\n");
	if ((*f)->sign)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	(*f)->len += ft_putstr_len(ft_adj_zero(*f, str));
	(*f)->len += ft_putstr_len(str);
}

void	ft_print_size_prec(t_format **f, char *str)
{// Si size et prec
	//printf("|4|\n");
	if ((*f)->sign && !((*f)->prec) && (*f)->size)
		(*f)->len += ft_putstr_len((*f)->sign);
	if ((*f)->space && !(*f)->sign && ft_strcmp(str, "(null)") && str[0])
		(*f)->len += ft_putstr_len(" ");
	//printf("%d %d\n", (*f)->size, (*f)->prec);
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

void 	ft_print_all(t_format **f, char *str)
{
	if (!(*f)->less)
	{
		if ((!(*f)->prec && !(*f)->zero))
			ft_print_default(f, str);
		if (((*f)->zero || (*f)->prec) && !((*f)->size && (*f)->prec))
			ft_print_zero_prec(f, str);
		if ((*f)->prec && (*f)->size)
			ft_print_size_prec(f, str);
	}
	if ((*f)->less)
	{
		if ((*f)->size)
			ft_print_less_size(f, str);
		if (!(*f)->size && (!(*f)->zero || (*f)->prec))
			ft_print_less_prec(f, str);
	}
}
