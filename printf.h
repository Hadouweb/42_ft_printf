#ifndef PRINTF_H
#define PRINTF_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_select_format(va_list ap, char *c);
int     ft_format_int(va_list ap, char c);
int     ft_format_byte(va_list ap);
int     ft_format_char(va_list ap);
int     ft_format_uint(va_list ap);
int     ft_format_hexa(va_list ap);
int     ft_format_hexaup(va_list ap);
int     ft_format_str(va_list ap);
int     ft_format_ptr(va_list ap);
int     ft_format_percent(va_list ap, char *t);
//int     ft_format_float(va_list ap);
void    ft_putnbr(int n);
void    ft_putnbr_long(long n);
//void    ft_putnbr_float(float n);
int     ft_intlen(int n);
int     ft_longlen(long n);
size_t  ft_strlen(const char *str);
char    *ft_itoa_base(long long n, int base, int print_v);

#endif
