/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 05:46:45 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/18 10:37:42 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_flag(t_format **f, char **s)
{
	if (**s == '#')
		(*f)->sharp++;
	else if (**s == '0')
		(*f)->zero++;
	else if (**s == '-')
		(*f)->less++;
	else if (**s == '+')
		(*f)->more++;
	else if (**s == ' ')
		(*f)->space++;
	else
		return (0);
	(*s)++;
	return (1);
}

int		ft_check_modifier(t_format **f, char **s)
{
	if (**s == 'h')
		(*f)->h++;
	else if (**s == 'l')
		(*f)->l++;
	else if (**s == 'j')
		(*f)->j++;
	else if (**s == 'z')
		(*f)->z++;
	else
		return (0);
	(*s)++;
	return (1);
}

int		ft_check_conv(t_format **f, char **s)
{
	if (**s == 'd' || **s == 'D' || **s == 'i' || **s == 'u' || **s == 'U'
		|| **s == 'o' || **s == 'O' || **s == 'x' || **s == 'X' || **s == 'c'
		|| **s == 'C' || **s == 's' || **s == 'S' || **s == 'p')
	{
		(*f)->conv = **s;
		return (1);
	}
	return (0);
}

int		ft_check_precision(t_format **f, char **s)
{
	char	*prec;

	prec = NULL;
	if (**s == '.' && ((*f)->pnt = 1 == 1))
	{
		if (ft_isdigit(*(*s + 1)) && (*s)++)
		{
			while (**s && ft_isdigit(**s))
			{
				if (!prec && ((prec = ft_memalloc(2)) != NULL) &&
					(prec[0] = **s) == **s)
					prec[1] = '\0';
				else
					prec = ft_stradd_char(&prec, **s);
				(*s)++;
			}
			(*f)->prec = ft_atoi(prec);
			ft_strdel(&prec);
		}
		else
			(*s)++;
		return (1);
	}
	return (0);
}

int		ft_check_size(t_format **f, char **s)
{
	char	*size;

	size = NULL;
	if (**s >= '1' && **s <= '9')
	{
		while (**s && ft_isdigit(**s))
		{
			if (!size)
			{
				size = ft_memalloc(2);
				size[0] = **s;
				size[1] = '\0';
			}
			else
				size = ft_stradd_char(&size, **s);
			(*s)++;
		}
		(*f)->size = ft_atoi(size);
		ft_strdel(&size);
		return (1);
	}
	return (0);
}
