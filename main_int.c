/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 06:09:48 by nle-bret         ###   ########.fr       */
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
	ft_printf("[+D] : ");
	n1 = ft_printf("[%+D]", 12345);
	n2 = printf("[%+D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10D] : ");
	n1 = ft_printf("[%+.10D] ", 12345);
	n2 = printf("[%+.10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+0D] : ");
	n1 = ft_printf("[%+0D]", 12345);
	n2 = printf("[%+0D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10D] : ");
	n1 = ft_printf("[%+10D]", 12345);
	n2 = printf("[%+10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+ 10D] : ");
	n1 = ft_printf("[%+ 10D]", 12345);
	n2 = printf("[%+ 10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+#D] : ");
	n1 = ft_printf("[%+#D]", 12345);
	n2 = printf("[%+#D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-D] : ");
	n1 = ft_printf("[%-D]", 12345);
	n2 = printf("[%-D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-0D] : ");
	n1 = ft_printf("[%-0D]", 12345);
	n2 = printf("[%-D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010D] : ");
	n1 = ft_printf("[%-010D]", 12345);
	n2 = printf("[%-010D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10D] : ");
	n1 = ft_printf("[%-.10D]", 12345);
	n2 = printf("[%-.10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[- 10D] : ");
	n1 = ft_printf("[%- 10D]", 12345);
	n2 = printf("[%- 10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-010D] : ");
	n1 = ft_printf("[%+-010D]", 12345);
	n2 = printf("[%+-010D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10D] : ");
	n1 = ft_printf("[%+-#.10D]", 12345);
	n2 = printf("[%+-#.10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010D] : ");
	n1 = ft_printf("[%++010D]", 12345);
	n2 = printf("[%++010D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10D] : ");
	n1 = ft_printf("[%-- 10D]", 12345);
	n2 = printf("[%-- 10D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[D] : ");
	n1 = ft_printf("[%D]", 12345);
	n2 = printf("[%D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#D] : ");
	n1 = ft_printf("[%#D]", 12345);
	n2 = printf("[%#D]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llD] : ");
	n1 = ft_printf("[%llD]", 12345);
	n2 = printf("[%llD]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hD] : ");
	n1 = ft_printf("[%hD]", 12345);
	n2 = printf("[%hD]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+jD] : ");
	n1 = ft_printf("[%jD]", 12345);
	n2 = printf("[%jD]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);


	return (0);
}
