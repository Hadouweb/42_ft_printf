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

int     main(void)
{
	int     test;
	int     n1;
	int     n2;

	setlocale (LC_ALL, "");

	test = 10;
	ft_printf("[+d] : ");
	n1 = ft_printf("[%+d]", 12345);
	n2 = printf("[%+d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", 12345);
	n2 = printf("[%+.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", 12345);
	n2 = printf("[%+0d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10d] : ");
	n1 = ft_printf("[%+10d]", 12345);
	n2 = printf("[%+10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +10d] : ");
	n1 = ft_printf("[% +10d]", 12345);
	n2 = printf("[% +10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+#d] : ");
	n1 = ft_printf("[%+#d]", 12345);
	n2 = printf("[%+#d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-d] : ");
	n1 = ft_printf("[%-d]", 12345);
	n2 = printf("[%-d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-0d] : ");
	n1 = ft_printf("[%-0d]", 12345);
	n2 = printf("[%-d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010d] : ");
	n1 = ft_printf("[%-010d]", 12345);
	n2 = printf("[%-010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", 12345);
	n2 = printf("[%-.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[- 10d] : ");
	n1 = ft_printf("[%- 10d]", 12345);
	n2 = printf("[%- 10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-010d] : ");
	n1 = ft_printf("[%+-010d]", 12345);
	n2 = printf("[%+-010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10d] : ");
	n1 = ft_printf("[%+-#.10d]", 12345);
	n2 = printf("[%+-#.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010d] : ");
	n1 = ft_printf("[%++010d]", 12345);
	n2 = printf("[%++010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10d] : ");
	n1 = ft_printf("[%-- 10d]", 12345);
	n2 = printf("[%-- 10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[d] : ");
	n1 = ft_printf("[%d]", 12345);
	n2 = printf("[%d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 12345);
	n2 = printf("[%#d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", 12345);
	n2 = printf("[%lld]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", 12345);
	n2 = printf("[%hd]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+jd] : ");
	n1 = ft_printf("[%jd]", 12345);
	n2 = printf("[%jd]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+d] : ");
	n1 = ft_printf("[%+d]", -12345);
	n2 = printf("[%+d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d] ", -12345);
	n2 = printf("[%+.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", -12345);
	n2 = printf("[%+0d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10d] : ");
	n1 = ft_printf("[%+10d]", -12345);
	n2 = printf("[%+10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+ 10d] : ");
	n1 = ft_printf("[%+ 10d]", -12345);
	n2 = printf("[%+ 10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+#d] : ");
	n1 = ft_printf("[%+#d]", -12345);
	n2 = printf("[%+#d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-d] : ");
	n1 = ft_printf("[%-d]", -12345);
	n2 = printf("[%-d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-0d] : ");
	n1 = ft_printf("[%-0d]", -12345);
	n2 = printf("[%-d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010d] : ");
	n1 = ft_printf("[%-010d]", -12345);
	n2 = printf("[%-010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", -12345);
	n2 = printf("[%-.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[- 10d] : ");
	n1 = ft_printf("[%- 10d]", -12345);
	n2 = printf("[%- 10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-010d] : ");
	n1 = ft_printf("[%+-010d]", -12345);
	n2 = printf("[%+-010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10d] : ");
	n1 = ft_printf("[%+-#.10d]", -12345);
	n2 = printf("[%+-#.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010d] : ");
	n1 = ft_printf("[%++010d]", -12345);
	n2 = printf("[%++010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10d] : ");
	n1 = ft_printf("[%-- 10d]", -12345);
	n2 = printf("[%-- 10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[d] : ");
	n1 = ft_printf("[%d]", -12345);
	n2 = printf("[%d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", -12345);
	n2 = printf("[%#d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", -12345);
	n2 = printf("[%lld]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", -12345);
	n2 = printf("[%hd]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+jd] : ");
	n1 = ft_printf("[%jd]", -12345);
	n2 = printf("[%jd]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);



	return (0);
}
