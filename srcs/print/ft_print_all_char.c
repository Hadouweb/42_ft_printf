/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:28:23 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/18 13:49:21 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_adj_char(t_format *f, char c)
{
	char	*adj;
	int		size;

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

int		ft_join_all_char(t_format **f, char c)
{
	char	*adj;
	char	l;

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

void	ft_print_all_char(t_format **f, char *str)
{
	if ((!(*f)->prec && !(*f)->zero && !(*f)->pnt && !(*f)->size))
		ft_print_noprec_nosize_char(f, str);
	else if ((*f)->pnt && (*f)->size)
		ft_print_size_prec_char(f, str);
	else if ((*f)->zero && (*f)->size)
		ft_print_zero_size_char(f, str);
	else if ((*f)->size && !(*f)->prec)
		ft_print_size_char(f, str);
	else
		ft_print_default_char(f, str);
}

char	*ft_check_str(t_format *f, char *str)
{
	char	*adj;
	int		size;

	adj = NULL;
	size = f->prec;
	if (size > 0 && f->conv != 'c')
	{
		adj = ft_memalloc(size + 1);
		if (f->conv != 'S')
			ft_strncpy(adj, str, size);
		if (f->conv == 'S')
			ft_strncpy_wchar(adj, size, f);
		adj[size] = '\0';
	}
	return (adj);
}
