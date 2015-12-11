/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 06:54:23 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <limits.h>

int     main(void)
{
	int     n1;
	int     n2;

	setlocale (LC_ALL, "");

	n1 = ft_printf("%lo, %lo", 0, ULONG_MAX);
	n2 = printf("%lo, %lo", 0, ULONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
