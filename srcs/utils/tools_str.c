/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:39:09 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 16:26:21 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int		ft_putchar_len(char c, t_format *f)
{
	if (f->fd != 1)
		write(f->fd, &c, 1);
	else
		write(1, &c, 1);
	return (1);
}

int		ft_putstr_len(char *str, t_format *f)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		ft_putchar_fd(str[i], f->fd);
		i++;
	}
	return (i);
}
