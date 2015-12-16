/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 05:28:09 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 06:46:49 by nle-bret         ###   ########.fr       */
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
	char		h;
	char		l;
	char		j;
	char		z;
	int 		prec;
	int 		pnt;
	int 		size;
	int			len;
	long long 	nbr;
	char		conv;
	char		*sign;
	char		*str;
}				t_format;

int				ft_printf(const char *f, ...);
void			ft_putchar(char c);
int				ft_putchar_len(char c);
void			ft_putstr(char *str);
int				ft_putstr_len(char *str);
void			ft_putnbr(long long n);
void			ft_putnbr_u(unsigned long long n);
char			ft_nbrlen(long long n, int base);
char			ft_nbrlen_u(unsigned long long n, int base);
size_t			ft_strlen(const char *str);
size_t			ft_wlen(wchar_t *wstr);
char			*ft_itoa_base(long long n, int base, int print_v);
char			*ft_uitoa_base(unsigned long long n, int base, int print_v);
int				ft_wconvert(char *str, wchar_t w);

int				ft_select_format(va_list ap, t_format **f);
void			ft_format_int(va_list ap, t_format **f);
void			ft_format_byte(va_list ap, t_format **f);
void			ft_format_uint(va_list ap, t_format **f);
void			ft_format_hexa(va_list ap, t_format **f);
void			ft_format_hexaup(va_list ap, t_format **f);
void			ft_format_str(va_list ap, t_format **f);
void			ft_format_char(va_list ap, t_format **f);
void			ft_format_uni_one(va_list ap, t_format **f);
void			ft_format_uni_many(va_list ap, t_format **f);
void			ft_format_ptr(va_list ap, t_format **f);
void			ft_format_percent(t_format **f);
//int			ft_format_float(va_list ap);
//void			ft_putnbr_float(float n);

char			*ft_strcpy(char *dst, const char *src);
size_t			ft_strlen(const char *s);

void			ft_save_string(char **str, t_format **f, va_list ap);
void			ft_format_init(t_format **f);
int				ft_check_flag(t_format **f, char **s);
int				ft_check_modifier(t_format **f, char **s);
int				ft_check_precision(t_format **f, char **s);
int				ft_check_size(t_format **f, char **s);
int				ft_check_conv(t_format **f, char **s);
void			ft_print_format(t_format *f);
char			*ft_strjoin(char *s, char *s2);
char			*ft_strdup(const char *s1);
void			*ft_memalloc(size_t size);
void			*ft_memset(void *b, int c, size_t len);
void			ft_strdel(char **as);
char			*ft_stradd_char(char **s, char c);
int				ft_atoi(const char *str);
char			*ft_strsize(t_format *f, int size);
void			ft_check_flag_int(t_format **f);
void			ft_join_all(t_format *f, char **str);
void			ft_join_all_ptr(t_format *f, char *align, char **str);
void			ft_join_all_wchar(t_format *f, char *align, char **str);
int 			ft_join_all_char(t_format **f, char c);
int				ft_parse_percent(char **str, t_format **f);
int				ft_isdigit(int c);
char			*ft_strncpy(char *dst, const char *src, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **);
char			*ft_strcat(char *s1, const char *s2);
int 			ft_print_size(t_format **f, char **str);
char			*ft_adj(t_format *f, char *str, char c);
void 			ft_print_all(t_format **f, char *str);
int				ft_strcmp(const char *s1, const char *s2);
void 			ft_print_all_char(t_format **f, char *str);
char			*ft_adj_zero(t_format *f, char *str);
char			*ft_adj_space(t_format *f, char *str);
char			*ft_strncpy_wchar(char *dst, const char *src, size_t n);
void 			ft_print_less_size(t_format **f, char *str);
void 			ft_print_less_prec(t_format **f, char *str);
void			ft_print_zero_prec(t_format **f, char *str);
void			ft_print_size_prec(t_format **f, char *str);
void			ft_print_default(t_format **f, char *str);

#endif
