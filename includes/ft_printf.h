/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 05:28:09 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 06:11:12 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_format
{
	char		sharp;
	char		zero;
	char		less;
	char		more;
	char		space;
	char		hh;
	char		h;
	char		l;
	char		ll;
	char		j;
	char		z;
	int			len;
	char		conv;
	char		*str;
}				t_format;

int				ft_printf(const char *f, ...);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(long long n);
void			ft_putnbr_u(unsigned long long n);
char			ft_nbrlen(long long n, int base);
char			ft_nbrlen_u(unsigned long long n, int base);
size_t			ft_strlen(const char *str);
size_t			ft_wlen(wchar_t *wstr);
char			*ft_itoa_base(long long n, int base, int print_v);
int				ft_wconvert(char *str, wchar_t w);

int				ft_select_format(va_list ap, char *c);
int				ft_format_int(va_list ap, char c);
int				ft_format_byte(va_list ap);
int				ft_format_char(va_list ap);
int				ft_format_uint(va_list ap);
int				ft_format_hexa(va_list ap);
int				ft_format_hexaup(va_list ap);
int				ft_format_str(va_list ap);
int				ft_format_uni_one(va_list ap);
int				ft_format_uni_many(va_list ap);
int				ft_format_ptr(va_list ap);
int				ft_format_percent(char *t);
//int			ft_format_float(va_list ap);
//void			ft_putnbr_float(float n);

char			*ft_strcpy(char *dst, const char *src);
size_t			ft_strlen(const char *s);

void			ft_save_string(char *str, t_format **format, va_list ap);
void			ft_format_init(t_format **format);
int				ft_check_flag(t_format **format, char *s);
int				ft_check_modifier(t_format **format, char *s);
void			ft_print_format(t_format *format);

#endif
