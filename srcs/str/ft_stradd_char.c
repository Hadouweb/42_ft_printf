/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 23:06:38 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/12 08:19:21 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_stradd_char(char **s, char c)
{
	int		len;
	char	*str;

	len = ft_strlen(*s);
	str = (char *)malloc(len + 1 * sizeof(char) + 1);
	ft_strcpy(str, *s);
	ft_strdel(s);
	str[len++] = c;
	str[len] = '\0';
	return (str);
}
