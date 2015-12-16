/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 00:41:42 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <limits.h>

int     main(void)
{
	int     n1;
	int     n2;
	char	c;

	c = 0;
	setlocale (LC_ALL, "");

	//n1 = ft_printf("[%03.2d]", 0);
	ft_printf("[-- 10D] : ");
	n1 = ft_printf("[%-- 10D]", -12345);
	n2 = printf("[%-- 10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	/*n1 = ft_printf("[%10d]", -42);
	n2 = printf("[%10d]", -42);
	printf("\n%d %d\n", n1, n2);

	n1 = ft_printf("[%+10d]", -42);
	n2 = printf("[%+10d]", -42);
	printf("\n%d %d\n", n1, n2);

	n1 = ft_printf("[%+010d]", -42);
	n2 = printf("[%+010d]", -42);
	printf("\n%d %d\n", n1, n2);

	n1 = ft_printf("[%010d]", 42);
	n2 = printf("[%010d]", 42);
	printf("\n%d %d\n", n1, n2);

	n1 = ft_printf("[%010d]", 42);
	n2 = printf("[%010d]", 42);
	printf("\n%d %d\n", n1, n2);

	n1 = ft_printf("[%+10d]", 42);
	n2 = printf("[%+10d]", 42);
	printf("\n%d %d\n", n1, n2);

	n1 = ft_printf("[%+010d]", 42);
	n2 = printf("[%+010d]", 42);
	printf("\n%d %d\n", n1, n2);*/
	return (0);
}
