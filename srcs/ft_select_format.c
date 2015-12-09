/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:47:22 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 00:29:39 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_select_format(va_list ap, char *c)
{
	t_conv	*conv[10];
	int		i;
	int		j;

	i = 0;
	ft_strcpy(conv[0]->s, "dDi");
	conv[0]->p = ft_format_int;
	while (i < 10)
	{
		j = 0;
		while (conv[i]->s[j])
		{
			printf("a %c %c\n", conv[i]->s[j], *c);
			if (conv[i]->s[j] == *c)
				return (conv[i]->p(ap, *c));
			j++;
		}
		i++;
	}
	

    /*if (*c == 'd' || *c == 'i' || *c == 'D')
        return (ft_format_int(ap, *c));
    else if (*c == 'o' || *c == 'O')
        return (ft_format_byte(ap));
    else if (*c == 'u' || *c == 'U')
        return (ft_format_uint(ap));
    else if (*c == 'x')
        return (ft_format_hexa(ap));
    else if (*c == 'X')
        return (ft_format_hexaup(ap));
    else if (*c == 'c')
        return (ft_format_char(ap));
    else if (*c == 's')
        return (ft_format_str(ap));
    else if (*c == 'S')
        return (ft_format_uni_many(ap));
    else if (*c == 'C')
        return (ft_format_uni_one(ap));
    else if (*c == 'p')
        return (ft_format_ptr(ap));
    else if (*c == '%' || *c == '}' || *c == ' ')
        return (ft_format_percent(c));*/
    return (-1);
}
