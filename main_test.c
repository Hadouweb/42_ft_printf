/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 03:32:13 by nle-bret         ###   ########.fr       */
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

	n1 = ft_printf("[% d]", 9999);
	n2 = printf("[% d]", 9999);
	printf(" | RETURN : %d %d\n", n1, n2);

	n1 = ft_printf("[% d]", -9999);
	n2 = printf("[% d]", -9999);
	printf(" | RETURN : %d %d\n", n1, n2);

	n1 = ft_printf("[% +d]", 9999);
	n2 = printf("[% +d]", 9999);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
