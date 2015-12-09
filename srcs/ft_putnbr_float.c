/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:47:12 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 21:47:18 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*void    ft_print_bit(unsigned int value, int size)
{
    int i;

    i = size - 1;
    while (i >= 0)
    {
        printf("%d", (value >> i) & 1);
        i--;
    }
    printf("\n");
}

int             ft_pow(int a, int b)
{
    int     r;

    r = 1;
    while (b)
    {
        r *= a;
        b--;
    }
    return (r);
}

unsigned int    ft_get_left(unsigned int value, int size, int max)
{
    int i;
    unsigned int left;
    unsigned int exp;

    i = size - 1;
    left = 0;
    exp = max;
    while (i >= 0 && max > 0)
    {
        left = left | (value >> i); 
        i--;
        max--;
        left <<= 1;
    }
    left = left >> 1;
    left += ft_pow(2,exp);
    return (left);
}

unsigned int    ft_reverse_bit(unsigned int value, int size, int exp)
{
    unsigned int    tmp;
    int             i;
    unsigned int    test;

    value <<= exp - 1;
    memcpy(test, value, 23);
    ft_print_bit(test, 23);
    tmp = 0;
    i = size;
    while (value)
    {
        value >>= 1;
        tmp <<= 1;
        tmp = tmp | (value & 1);
    }
    return (tmp);
}

unsigned int    ft_get_right(unsigned int value, int size, int exp)
{
    int i;
    unsigned int right;

    i = size - 1;
    right = 0;
    while (i >= 0)
    {
        right = right | (value >> i);
        right <<= 1;
        i--;
    }
    right = ft_reverse_bit(right, 23, exp);
    ft_print_bit(right, 23);
    return (right);
}

void            ft_putnbr_float(float n)
{
    n = 87.625;
    unsigned int    i;
    unsigned int    mant;
    unsigned int    sign;
    unsigned int    exp;

    i = *(int *) &n;
    sign = i >> 31;
    exp = (i >> 23) & 0xff;
    mant = i & 0x7fffff;
    ft_get_right(mant, 23, (exp - 127));
    if (sign)
      ft_putchar('-');
      ft_putnbr(ft_get_left(mant, 23, (exp - 127)));
}*/
