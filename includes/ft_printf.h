/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 05:28:09 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 19:05:12 by nle-bret         ###   ########.fr       */
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
	int			prec;
	int			pnt;
	int			size;
	int			len;
	long long	nbr;
	char		conv;
	char		*sign;
	char		*str;
	wchar_t		*wstr;
	int			star;
	int			fd;
}				t_format;

int				ft_fprintf(FILE *fd, const char *tmp, ...);
int				ft_printf(const char *f, ...);
void			ft_save_string(char **str, t_format **f, va_list ap);

int				ft_check_star(t_format **f, char **s, va_list ap);
int				ft_check_flag(t_format **f, char **s);
int				ft_check_modifier(t_format **f, char **s);
int				ft_check_conv(t_format **f, char **s);
int				ft_check_precision(t_format **f, char **s);
int				ft_check_size(t_format **f, char **s);

int				ft_select_format(va_list ap, t_format **f);
int				ft_print_size(t_format **f, char **str);
int				ft_parse_percent(char **str, t_format **f, va_list ap);

void			ft_format_init(t_format **f);
void			ft_print_format(t_format *f);

void			ft_format_bit(va_list ap, t_format **f);

void			ft_modif_type_byte(t_format *f, unsigned long long *n);
void			ft_format_byte(va_list ap, t_format **f);

void			ft_modif_type_hexa(t_format *f, unsigned long long *n);
void			ft_format_hexa(va_list ap, t_format **f);
void			ft_format_hexaup(va_list ap, t_format **f);

void			ft_modif_type_int(t_format *f, long long *n);
void			ft_format_int(va_list ap, t_format **f);
void			ft_modif_type_uint(t_format *f, unsigned long long *n);
void			ft_format_uint(va_list ap, t_format **f);

void			ft_format_ptr(va_list ap, t_format **f);

void			ft_format_str(va_list ap, t_format **f);
void			ft_format_char(va_list ap, t_format **f);
void			ft_format_uni_one(va_list ap, t_format **f);
void			ft_format_uni_many(va_list ap, t_format **f);

void			ft_print_all(t_format **f, char *str);
char			*ft_adj_zero(t_format *f, char *str);
char			*ft_adj_space(t_format *f, char *str);

char			*ft_adj_char(t_format *f, char c);
int				ft_join_all_char(t_format **f, char c);
void			ft_print_all_char(t_format **f, char *str);
char			*ft_check_str(t_format *f, char *str);

void			ft_print_less_size(t_format **f, char *str);
void			ft_print_less_prec(t_format **f, char *str);
void			ft_print_zero_prec(t_format **f, char *str);
void			ft_print_size_prec(t_format **f, char *str);
void			ft_print_default(t_format **f, char *str);

void			ft_print_size_char(t_format **f, char *str);
void			ft_print_zero_size_char(t_format **f, char *str);
void			ft_print_size_prec_char(t_format **f, char *str);
void			ft_print_default_char(t_format **f, char *str);
void			ft_print_noprec_nosize_char(t_format **f, char *str);

int				ft_atoi(const char *str);
int				ft_isdigit(int c);
int				ft_intlen_base(long long n, int base);
int				ft_uintlen_base(unsigned long long n, int base);
char			*ft_itoa_base(long long n, int base, int print_v);
char			*ft_uitoa_base(unsigned long long n, int base, int print_v);
void			*ft_memalloc(size_t size);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
char			*ft_strcpy(char *dst, const char *src);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_stradd_char(char **s, char c);
char			*ft_strcat(char *s1, const char *s2);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_strdel(char **as);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char *s, char *s2);
size_t			ft_strlen(const char *str);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strncpy_wchar(char *dst, size_t n, t_format *f);
char			ft_nbrlen(long long n, int base);
char			ft_nbrlen_u(unsigned long long n, int base);
size_t			ft_strlen(const char *s);
void			ft_putchar(char c, t_format *f);
int				ft_putchar_len(char c, t_format *f);
int				ft_putstr_len(char *str, t_format *f);
size_t			ft_wlen(wchar_t *wstr);
int				ft_wcharlen(wchar_t *w);
int				ft_size_wchar(wchar_t w);
char			*ft_wconvert_str(char *str, wchar_t *wstr);
int				ft_wconvert(char *str, wchar_t w);
char			*ft_stradd_char(char **s, char c);

#endif
