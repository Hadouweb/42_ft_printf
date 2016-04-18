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
# include "libft.h"

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
void			ft_save_string(char **str, t_format *f, va_list ap);

int				ft_check_star(t_format *f, char **s, va_list ap);
int				ft_check_flag(t_format *f, char **s);
int				ft_check_modifier(t_format *f, char **s);
int				ft_check_conv(t_format *f, char c);
int				ft_check_precision(t_format *f, char **s);
int				ft_check_size(t_format *f, char **s);

int				ft_select_format(va_list ap, t_format *f);
int				ft_print_size(t_format *f, char **str);
int				ft_parse_percent(char **str, t_format *f, va_list ap);

void			ft_format_init(t_format *f);
void			ft_print_format(t_format *f);

void			ft_format_bit(va_list ap, t_format *f);

void			ft_modif_type_byte(t_format *f, unsigned long long *n);
void			ft_format_byte(va_list ap, t_format *f);

void			ft_modif_type_hexa(t_format *f, unsigned long long *n);
void			ft_format_hexa(va_list ap, t_format *f);
void			ft_format_hexaup(va_list ap, t_format *f);

void			ft_modif_type_int(t_format *f, long long *n);
void			ft_format_int(va_list ap, t_format *f);
void			ft_modif_type_uint(t_format *f, unsigned long long *n);
void			ft_format_uint(va_list ap, t_format *f);

void			ft_format_ptr(va_list ap, t_format *f);

void			ft_format_str(va_list ap, t_format *f);
void			ft_format_char(va_list ap, t_format *f);
void			ft_format_uni_one(va_list ap, t_format *f);
void			ft_format_uni_many(va_list ap, t_format *f);

void			ft_print_all(t_format *f, char *str);
char			*ft_adj_zero(t_format *f, char *str);
char			*ft_adj_space(t_format *f, char *str);

char			*ft_adj_char(t_format *f, char c);
int				ft_join_all_char(t_format *f, char c);
void			ft_print_all_char(t_format *f, char *str);
char			*ft_check_str(t_format *f, char *str);

void			ft_print_less_size(t_format *f, char *str);
void			ft_print_less_prec(t_format *f, char *str);
void			ft_print_zero_prec(t_format *f, char *str);
void			ft_print_size_prec(t_format *f, char *str);
void			ft_print_default(t_format *f, char *str);

void			ft_print_size_char(t_format *f, char *str);
void			ft_print_zero_size_char(t_format *f, char *str);
void			ft_print_size_prec_char(t_format *f, char *str);
void			ft_print_default_char(t_format *f, char *str);
void			ft_print_noprec_nosize_char(t_format *f, char *str);

# define EOC   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define BOLDBLACK   "\033[1m\033[30m"
# define BOLDRED     "\033[1m\033[31m"
# define BOLDGREEN   "\033[1m\033[32m"
# define BOLDYELLOW  "\033[1m\033[33m"
# define BOLDBLUE    "\033[1m\033[34m"
# define BOLDMAGENTA "\033[1m\033[35m"
# define BOLDCYAN    "\033[1m\033[36m"
# define BOLDWHITE   "\033[1m\033[37m"

#endif
