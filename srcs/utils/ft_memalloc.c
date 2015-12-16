/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:20:03 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:51:23 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void	*data;

	if ((data = (void *)malloc(size * sizeof(*data))) == NULL)
		return (NULL);
	ft_memset(data, 0, size);
	return (data);
}
