/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:27:41 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 21:27:53 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10u] : ");
	n1 = ft_printf("[%10u]", 12345);
	n2 = printf("[%10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10u] : ");
	n1 = ft_printf("[%10u]", -12345);
	n2 = printf("[%10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10u] : ");
	n1 = ft_printf("[%+10u]", -12345);
	n2 = printf("[%+10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10u] : ");
	n1 = ft_printf("[%+10u]", -12345);
	n2 = printf("[%+10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010u] : ");
	n1 = ft_printf("[%010u]", 12345);
	n2 = printf("[%010u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010u] : ");
	n1 = ft_printf("[%010u]", -12345);
	n2 = printf("[%010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010u] : ");
	n1 = ft_printf("[%+010u]", 12345);
	n2 = printf("[%+010u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010u] : ");
	n1 = ft_printf("[%+010u]", -12345);
	n2 = printf("[%+010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0u] : ");
	n1 = ft_printf("[%+0u]", 12345);
	n2 = printf("[%+0u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0u] : ");
	n1 = ft_printf("[%+0u]", -12345);
	n2 = printf("[%+0u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010u] : ");
	n1 = ft_printf("[%.010u]", 12345);
	n2 = printf("[%.010u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010u] : ");
	n1 = ft_printf("[%.010u]", -12345);
	n2 = printf("[%.010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010u] : ");
	n1 = ft_printf("[%-010u]", 12345);
	n2 = printf("[%-010u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010u] : ");
	n1 = ft_printf("[%-010u]", -12345);
	n2 = printf("[%-010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10u] : ");
	n1 = ft_printf("[%-.10u]", 12345);
	n2 = printf("[%-.10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10u] : ");
	n1 = ft_printf("[%-.10u]", -12345);
	n2 = printf("[%-.10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10u] : ");
	n1 = ft_printf("[%.10u]", 12345);
	n2 = printf("[%.10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10u] : ");
	n1 = ft_printf("[%.10u]", -12345);
	n2 = printf("[%.10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10u] : ");
	n1 = ft_printf("[%+.10u]", 12345);
	n2 = printf("[%+.10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10u] : ");
	n1 = ft_printf("[%+.10u]", -12345);
	n2 = printf("[%+.10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010u] : ");
	n1 = ft_printf("[%-.010u]", 12345);
	n2 = printf("[%-.010u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010u] : ");
	n1 = ft_printf("[%-.010u]", -12345);
	n2 = printf("[%-.010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010u] : ");
	n1 = ft_printf("[%+.010u]", 12345);
	n2 = printf("[%+.010u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010u] : ");
	n1 = ft_printf("[%+.010u]", -12345);
	n2 = printf("[%+.010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10u] : ");
	n1 = ft_printf("[%.+10u]", 12345);
	n2 = printf("[%.+10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10u] : ");
	n1 = ft_printf("[%.+10u]", -12345);
	n2 = printf("[%.+10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10u] : ");
	n1 = ft_printf("[%.-10u]", 12345);
	n2 = printf("[%.-10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10u] : ");
	n1 = ft_printf("[%.-10u]", -12345);
	n2 = printf("[%.-10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10u] : ");
	n1 = ft_printf("[%+.10u]", 12345);
	n2 = printf("[%+.10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10u] : ");
	n1 = ft_printf("[%+.10u]", -12345);
	n2 = printf("[%+.10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10u] : ");
	n1 = ft_printf("[%-.10u]", 12345);
	n2 = printf("[%-.10u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10u] : ");
	n1 = ft_printf("[%-.10u]", -12345);
	n2 = printf("[%-.10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %d after]", 12345);
	n2 = printf("[before %d after]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %d after]", -12345);
	n2 = printf("[before %d after]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %db \n]", 12345);
	n2 = printf("[a %d b\n]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", -12345);
	n2 = printf("[a %d b\n]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#u] : ");
	n1 = ft_printf("[%#u]", 12345);
	n2 = printf("[%#u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#u] : ");
	n1 = ft_printf("[%#u]", -12345);
	n2 = printf("[%#u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lu] : ");
	n1 = ft_printf("[%lu]", 12345);
	n2 = printf("[%lu]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lu] : ");
	n1 = ft_printf("[%lu]", -12345);
	n2 = printf("[%lu]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llu] : ");
	n1 = ft_printf("[%llu]", 12345);
	n2 = printf("[%llu]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llu] : ");
	n1 = ft_printf("[%llu]", -12345);
	n2 = printf("[%llu]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllu] : ");
	n1 = ft_printf("[%lllllu]", 12345);
	n2 = printf("[%lllllu]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllllu] : ");
	n1 = ft_printf("[%llllllu]", -12345);
	n2 = printf("[%llllllu]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hu] : ");
	n1 = ft_printf("[%hu]", 12345);
	n2 = printf("[%hu]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hu] : ");
	n1 = ft_printf("[%hu]", -12345);
	n2 = printf("[%hu]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhhu] : ");
	n1 = ft_printf("[%hhu]", 12345);
	n2 = printf("[%hhu]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhhu] : ");
	n1 = ft_printf("[%hhu]", -12345);
	n2 = printf("[%hhu]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhu] : ");
	n1 = ft_printf("[%hhu]", -12345);
	n2 = printf("[%hhu]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ju] : ");
	n1 = ft_printf("[%ju]", 12345);
	n2 = printf("[%ju]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjju] : ");
	n1 = ft_printf("[%jjju]", -12345);
	n2 = printf("[%jjju]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjju] : ");
	n1 = ft_printf("[%jjjju]", 12345);
	n2 = printf("[%jjjju]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+u] : ");
	n1 = ft_printf("[%+u]", -12345);
	n2 = printf("[%+u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#u] : ");
	n1 = ft_printf("[%#u]", 12345);
	n2 = printf("[%#u]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#u] : ");
	n1 = ft_printf("[%#u]", -12345);
	n2 = printf("[%#u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10u] : ");
	n1 = ft_printf("[%+-#.10u]", -12345);
	n2 = printf("[%+-#.10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010u] : ");
	n1 = ft_printf("[%++010u]", -12345);
	n2 = printf("[%++010u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10u] : ");
	n1 = ft_printf("[%-- 10u]", -12345);
	n2 = printf("[%-- 10u]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[u][u] : ");
	n1 = ft_printf("[%u][%u]", 88, 12345);
	n2 = printf("[%u][%u]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[u][u] : ");
	n1 = ft_printf("[%u][%u]", -88, 12345);
	n2 = printf("[%u][%u]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[u][u] : ");
	n1 = ft_printf("[%u][%u]", 0, 12345);
	n2 = printf("[%u][%u]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4u] : ");
	n1 = ft_printf("[%.+-hjl10.4u]", 88);
	n2 = printf("[%.+-hjl10.4u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8u] : ");
	n1 = ft_printf("[%.10+8u]", 88);
	n2 = printf("[%.10+8u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8u] : ");
	n1 = ft_printf("[%.3.4.8u]", 88);
	n2 = printf("[%.3.4.8u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9u] : ");
	n1 = ft_printf("[%+7+8+9u]", 88);
	n2 = printf("[%+7+8+9u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0u] : ");
	n1 = ft_printf("[%-12-50.0u]", 88);
	n2 = printf("[%-12-50.0u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000u] : ");
	n1 = ft_printf("[%01000u]", 88);
	n2 = printf("[%01000u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0u] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0u]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[qu] : ");
	n1 = ft_printf("[%qu]", 88);
	n2 = printf("[%qu]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llu] : ");
	n1 = ft_printf("[%llu]", 10.00);
	n2 = printf("[%llu]", 10.00);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lhlu] : ");
	n1 = ft_printf("[%lhlu]", 11234);
	n2 = printf("[%lhlu]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhu] : ");
	n1 = ft_printf("[%hlhu]", 11234);
	n2 = printf("[%hlhu]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhu] : ");
	n1 = ft_printf("[%hlhu]", LONG_MAX);
	n2 = printf("[%hlhu]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hu] : ");
	n1 = ft_printf("[%hu]", LONG_MAX);
	n2 = printf("[%hu]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhu] : ");
	n1 = ft_printf("[%hlhu]", LONG_MIN);
	n2 = printf("[%hlhu]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +u] : ");
	n1 = ft_printf("[% +u]", LONG_MIN);
	n2 = printf("[% +u]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("+-10.4u] : ");
	n1 = ft_printf("[%+-10.4u]", 12);
	n2 = printf("[%+-10.4u]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#hlhu] : ");
	n1 = ft_printf("[%#hlhu]", LONG_MIN);
	n2 = printf("[%#hlhu]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[# +u] : ");
	n1 = ft_printf("[%# +u]", LONG_MIN);
	n2 = printf("[%# +u]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("#+-10.4u] : ");
	n1 = ft_printf("[%#+-10.4u]", 12);
	n2 = printf("[%#+-10.4u]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.7-13u] : ");
	n1 = ft_printf("[%.7-13u]", 88);
	n2 = printf("[%.7-13u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3u] : ");
	n1 = ft_printf("[%-12.5+3u]", 88);
	n2 = printf("[%-12.5+3u]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
