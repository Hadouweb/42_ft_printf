/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/18 07:02:46 by nle-bret         ###   ########.fr       */
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

	ft_printf("[llc] : ");
	n1 = ft_printf("[%llc]", L'Ḛ');
	n2 = printf("[%llc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llC] : ");
	n1 = ft_printf("[%llC]", L'Ḛ');
	n2 = printf("[%llC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
