/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:45:15 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 22:13:00 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_format_percent(char *t)
{
    if (*t == ' ')
    {
        if (*(t + 1) == '%')
            ft_putchar('%');
        else
            return (0);
    }
    else if (*t == '}')
        ft_putchar('}');
    else    
        ft_putchar('%');
    return (1);
}
