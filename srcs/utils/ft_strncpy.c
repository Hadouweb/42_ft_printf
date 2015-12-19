/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 02:40:16 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 16:28:34 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}

char	*ft_strncpy_wchar(char *dst, size_t n, t_format *f)
{
	size_t		i;
	size_t		j;
	wchar_t		*wstrdst;

	i = 0;
	j = 0;
	wstrdst = NULL;
	wstrdst = (wchar_t*)malloc(n + 1);
	while (f->wstr[i] && j < n)
	{
		if (j + ft_size_wchar(f->wstr[i]) <= n)
		{
			wstrdst[i] = f->wstr[i];
			j += ft_size_wchar(f->wstr[i]);
		}
		i++;
	}
	dst = ft_wconvert_str(dst, wstrdst);
	return (dst);
}
