/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 00:36:54 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 18:30:32 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_conv(t_format *f, char c)
{
	if (c == 'd' || c == 'D' || c == 'i' || c == 'u' || c == 'U'
		|| c == 'o' || c == 'O' || c == 'x' || c == 'X' || c == 'c'
		|| c == 'C' || c == 's' || c == 'S' || c == 'p' || c == 'b')
	{
		f->conv = c;
		return (1);
	}
	return (0);
}

void	ft_save_string(char **str, t_format *f, va_list ap)
{
	size_t	i;

	while (**str)
	{
		i = 0;
		if (**str == '%')
		{
			ft_format_init(f);
			(*str)++;
			if (ft_check_conv(f, **str) || ft_parse_percent(str, f, ap))
				ft_select_format(ap, f);
			else
			{
				if (f->size)
					ft_print_size(f, str);
				if (**str)
					f->len += ft_putchar_len_fd(**str, f->fd);
			}
		}
		else
			f->len += ft_putchar_len_fd(**str, f->fd);
		(*str)++;
	}
}

int		ft_fprintf(FILE *fd, const char *tmp, ...)
{
	va_list		ap;
	char		*str;
	char		*begin_str;
	t_format	f;

	va_start(ap, tmp);
	ft_bzero(&f, sizeof(t_format));
	f.fd = fileno(fd);
	str = ft_strdup(tmp);
	begin_str = str;
	ft_save_string(&str, &f, ap);
	va_end(ap);
	ft_strdel(&begin_str);
	return (f.len);
}

int		ft_printf(const char *tmp, ...)
{
	va_list		ap;
	char		*str;
	char		*begin_str;
	t_format	f;

	va_start(ap, tmp);
	ft_bzero(&f, sizeof(t_format));
	f.fd = 1;
	str = ft_strdup(tmp);
	begin_str = str;
	ft_save_string(&str, &f, ap);
	va_end(ap);
	ft_strdel(&begin_str);
	return (f.len);
}
