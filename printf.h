#ifndef PRINTF_H
#define PRINTF_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_select_format(va_list ap, char c);
int     ft_format_int(va_list ap);
int     ft_format_byte(va_list ap);
int     ft_format_uint(va_list ap);
int     ft_format_hexa(va_list ap);
int     ft_format_hexaup(va_list ap);
void    ft_putnbr(int n);
int     ft_intlen(int n);
char    *ft_itoa_base(int n, int base, int print_v);

#endif
