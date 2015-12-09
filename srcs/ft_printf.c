/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:46:42 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 22:05:40 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *f, ...)
{
    va_list     ap;
    size_t      i;
    char        *str;
    size_t      cnt;

    va_start(ap, f);
    cnt = 0;
    str = (char *)malloc(sizeof(char) * (strlen(f)) + 1);
    str = strcpy(str, f);
    i = 0;
    while (str[i])
    {
        if (str[i] != '%')
        {
            ft_putchar(str[i]);
            cnt++;
        }
        else if (str[i + 1])
            cnt += ft_select_format(ap, &str[i += 1]);
        i++;
    }
    va_end(ap); 
    return (cnt);
}
