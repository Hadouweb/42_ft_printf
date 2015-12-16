/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:26:44 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 21:26:56 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10i] : ");
	n1 = ft_printf("[%10i]", 12345);
	n2 = printf("[%10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10i] : ");
	n1 = ft_printf("[%10i]", -12345);
	n2 = printf("[%10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10i] : ");
	n1 = ft_printf("[%+10i]", -12345);
	n2 = printf("[%+10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10i] : ");
	n1 = ft_printf("[%+10i]", -12345);
	n2 = printf("[%+10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010i] : ");
	n1 = ft_printf("[%010i]", 12345);
	n2 = printf("[%010i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010i] : ");
	n1 = ft_printf("[%010i]", -12345);
	n2 = printf("[%010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010i] : ");
	n1 = ft_printf("[%+010i]", 12345);
	n2 = printf("[%+010i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010i] : ");
	n1 = ft_printf("[%+010i]", -12345);
	n2 = printf("[%+010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0i] : ");
	n1 = ft_printf("[%+0i]", 12345);
	n2 = printf("[%+0i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0i] : ");
	n1 = ft_printf("[%+0i]", -12345);
	n2 = printf("[%+0i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010i] : ");
	n1 = ft_printf("[%.010i]", 12345);
	n2 = printf("[%.010i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010i] : ");
	n1 = ft_printf("[%.010i]", -12345);
	n2 = printf("[%.010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010i] : ");
	n1 = ft_printf("[%-010i]", 12345);
	n2 = printf("[%-010i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010i] : ");
	n1 = ft_printf("[%-010i]", -12345);
	n2 = printf("[%-010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10i] : ");
	n1 = ft_printf("[%-.10i]", 12345);
	n2 = printf("[%-.10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10i] : ");
	n1 = ft_printf("[%-.10i]", -12345);
	n2 = printf("[%-.10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10i] : ");
	n1 = ft_printf("[%.10i]", 12345);
	n2 = printf("[%.10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10i] : ");
	n1 = ft_printf("[%.10i]", -12345);
	n2 = printf("[%.10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10i] : ");
	n1 = ft_printf("[%+.10i]", 12345);
	n2 = printf("[%+.10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10i] : ");
	n1 = ft_printf("[%+.10i]", -12345);
	n2 = printf("[%+.10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010i] : ");
	n1 = ft_printf("[%-.010i]", 12345);
	n2 = printf("[%-.010i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010i] : ");
	n1 = ft_printf("[%-.010i]", -12345);
	n2 = printf("[%-.010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010i] : ");
	n1 = ft_printf("[%+.010i]", 12345);
	n2 = printf("[%+.010i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010i] : ");
	n1 = ft_printf("[%+.010i]", -12345);
	n2 = printf("[%+.010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10i] : ");
	n1 = ft_printf("[%.+10i]", 12345);
	n2 = printf("[%.+10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10i] : ");
	n1 = ft_printf("[%.+10i]", -12345);
	n2 = printf("[%.+10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10i] : ");
	n1 = ft_printf("[%.-10i]", 12345);
	n2 = printf("[%.-10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10i] : ");
	n1 = ft_printf("[%.-10i]", -12345);
	n2 = printf("[%.-10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10i] : ");
	n1 = ft_printf("[%+.10i]", 12345);
	n2 = printf("[%+.10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10i] : ");
	n1 = ft_printf("[%+.10i]", -12345);
	n2 = printf("[%+.10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10i] : ");
	n1 = ft_printf("[%-.10i]", 12345);
	n2 = printf("[%-.10i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10i] : ");
	n1 = ft_printf("[%-.10i]", -12345);
	n2 = printf("[%-.10i]", -12345);
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

	ft_printf("[#i] : ");
	n1 = ft_printf("[%#i]", 12345);
	n2 = printf("[%#i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#i] : ");
	n1 = ft_printf("[%#i]", -12345);
	n2 = printf("[%#i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[li] : ");
	n1 = ft_printf("[%li]", 12345);
	n2 = printf("[%li]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[li] : ");
	n1 = ft_printf("[%li]", -12345);
	n2 = printf("[%li]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lli] : ");
	n1 = ft_printf("[%lli]", 12345);
	n2 = printf("[%lli]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lli] : ");
	n1 = ft_printf("[%lli]", -12345);
	n2 = printf("[%lli]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllli] : ");
	n1 = ft_printf("[%llllli]", 12345);
	n2 = printf("[%llllli]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllli] : ");
	n1 = ft_printf("[%lllllli]", -12345);
	n2 = printf("[%lllllli]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hi] : ");
	n1 = ft_printf("[%hi]", 12345);
	n2 = printf("[%hi]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hi] : ");
	n1 = ft_printf("[%hi]", -12345);
	n2 = printf("[%hi]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhhi] : ");
	n1 = ft_printf("[%hhi]", 12345);
	n2 = printf("[%hhi]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhhi] : ");
	n1 = ft_printf("[%hhi]", -12345);
	n2 = printf("[%hhi]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhi] : ");
	n1 = ft_printf("[%hhi]", -12345);
	n2 = printf("[%hhi]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ji] : ");
	n1 = ft_printf("[%ji]", 12345);
	n2 = printf("[%ji]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjji] : ");
	n1 = ft_printf("[%jjji]", -12345);
	n2 = printf("[%jjji]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjji] : ");
	n1 = ft_printf("[%jjjji]", 12345);
	n2 = printf("[%jjjji]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+i] : ");
	n1 = ft_printf("[%+i]", -12345);
	n2 = printf("[%+i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#i] : ");
	n1 = ft_printf("[%#i]", 12345);
	n2 = printf("[%#i]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#i] : ");
	n1 = ft_printf("[%#i]", -12345);
	n2 = printf("[%#i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10i] : ");
	n1 = ft_printf("[%+-#.10i]", -12345);
	n2 = printf("[%+-#.10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010i] : ");
	n1 = ft_printf("[%++010i]", -12345);
	n2 = printf("[%++010i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10i] : ");
	n1 = ft_printf("[%-- 10i]", -12345);
	n2 = printf("[%-- 10i]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[i][i] : ");
	n1 = ft_printf("[%i][%i]", 88, 12345);
	n2 = printf("[%i][%i]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[i][i] : ");
	n1 = ft_printf("[%i][%i]", -88, 12345);
	n2 = printf("[%i][%i]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[i][i] : ");
	n1 = ft_printf("[%i][%i]", 0, 12345);
	n2 = printf("[%i][%i]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4i] : ");
	n1 = ft_printf("[%.+-hjl10.4i]", 88);
	n2 = printf("[%.+-hjl10.4i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8i] : ");
	n1 = ft_printf("[%.10+8i]", 88);
	n2 = printf("[%.10+8i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8i] : ");
	n1 = ft_printf("[%.3.4.8i]", 88);
	n2 = printf("[%.3.4.8i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9i] : ");
	n1 = ft_printf("[%+7+8+9i]", 88);
	n2 = printf("[%+7+8+9i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0i] : ");
	n1 = ft_printf("[%-12-50.0i]", 88);
	n2 = printf("[%-12-50.0i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000i] : ");
	n1 = ft_printf("[%01000i]", 88);
	n2 = printf("[%01000i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0i] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0i]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[qi] : ");
	n1 = ft_printf("[%qi]", 88);
	n2 = printf("[%qi]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lli] : ");
	n1 = ft_printf("[%lli]", 10.00);
	n2 = printf("[%lli]", 10.00);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lhli] : ");
	n1 = ft_printf("[%lhli]", 11234);
	n2 = printf("[%lhli]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhi] : ");
	n1 = ft_printf("[%hlhi]", 11234);
	n2 = printf("[%hlhi]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhi] : ");
	n1 = ft_printf("[%hlhi]", LONG_MAX);
	n2 = printf("[%hlhi]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hi] : ");
	n1 = ft_printf("[%hi]", LONG_MAX);
	n2 = printf("[%hi]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhi] : ");
	n1 = ft_printf("[%hlhi]", LONG_MIN);
	n2 = printf("[%hlhi]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +i] : ");
	n1 = ft_printf("[% +i]", LONG_MIN);
	n2 = printf("[% +i]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("+-10.4i] : ");
	n1 = ft_printf("[%+-10.4i]", 12);
	n2 = printf("[%+-10.4i]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#hlhi] : ");
	n1 = ft_printf("[%#hlhi]", LONG_MIN);
	n2 = printf("[%#hlhi]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[# +i] : ");
	n1 = ft_printf("[%# +i]", LONG_MIN);
	n2 = printf("[%# +i]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("#+-10.4i] : ");
	n1 = ft_printf("[%#+-10.4i]", 12);
	n2 = printf("[%#+-10.4i]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.7-13i] : ");
	n1 = ft_printf("[%.7-13i]", 88);
	n2 = printf("[%.7-13i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3i] : ");
	n1 = ft_printf("[%-12.5+3i]", 88);
	n2 = printf("[%-12.5+3i]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
