/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 06:45:24 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 06:45:31 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
