#ifndef PRINTF_H
#define PRINTF_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(long long n);
void    ft_putnbr_u(unsigned long long n);
char    ft_nbrlen(long long n, int base);
char    ft_nbrlen_u(unsigned long long n, int base);
size_t  ft_strlen(const char *str);
size_t  ft_wlen(wchar_t *wstr);
char    *ft_itoa_base(long long n, int base, int print_v);
int     ft_wconvert(char *str, wchar_t w);

int     ft_select_format(va_list ap, char *c);
int     ft_format_int(va_list ap, char c);
int     ft_format_byte(va_list ap);
int     ft_format_char(va_list ap);
int     ft_format_uint(va_list ap);
int     ft_format_hexa(va_list ap);
int     ft_format_hexaup(va_list ap);
int     ft_format_str(va_list ap);
int     ft_format_uni_one(va_list ap);
int     ft_format_uni_many(va_list ap);
int     ft_format_ptr(va_list ap);
int     ft_format_percent(va_list ap, char *t);
//int     ft_format_float(va_list ap);
//void    ft_putnbr_float(float n);

#endif
