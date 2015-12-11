/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 01:00:22 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>

int     main(void)
{
	int     test;
	int     n1;
	int     n2;

	setlocale (LC_ALL, "");

	test = 10;
	n1 = ft_printf("a %010d\n", 123);
	n1 = ft_printf("a %.10d\n", 123);
	n1 = ft_printf("a % 10d\n", 123);
	n1 = ft_printf("a %10d\n", 123);

	n2 = printf("b %010d\n", 123);
	n2 = printf("b %.10d\n", 123);
	n2 = printf("b % 10d\n", 123);
	n2 = printf("b %10d\n", 123);


	printf("\n%d %d\n", n1, n2);
	return (0);
}
