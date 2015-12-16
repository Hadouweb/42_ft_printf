/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 02:40:16 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 04:18:53 by nle-bret         ###   ########.fr       */
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

char	*ft_strncpy_wchar(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t 	j;

	i = 0;
	j = 0;
	while (src[i] && i < n)
	{
		if (n - i > 3 || src[i] != -26)
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}