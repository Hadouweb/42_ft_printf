/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_u_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 10:15:14 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10U] : ");
	n1 = ft_printf("[%10U]", 12345);
	n2 = printf("[%10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10U] : ");
	n1 = ft_printf("[%10U]", -12345);
	n2 = printf("[%10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10U] : ");
	n1 = ft_printf("[%+10U]", -12345);
	n2 = printf("[%+10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10U] : ");
	n1 = ft_printf("[%+10U]", -12345);
	n2 = printf("[%+10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", 12345);
	n2 = printf("[%010U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", -12345);
	n2 = printf("[%010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010U] : ");
	n1 = ft_printf("[%+010U]", 12345);
	n2 = printf("[%+010U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010U] : ");
	n1 = ft_printf("[%+010U]", -12345);
	n2 = printf("[%+010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010U] : ");
	n1 = ft_printf("[%.010U]", 12345);
	n2 = printf("[%.010U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010U] : ");
	n1 = ft_printf("[%.010U]", -12345);
	n2 = printf("[%.010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010U] : ");
	n1 = ft_printf("[%-010U]", 12345);
	n2 = printf("[%-010U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010U] : ");
	n1 = ft_printf("[%-010U]", -12345);
	n2 = printf("[%-010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10U] : ");
	n1 = ft_printf("[%-.10U]", 12345);
	n2 = printf("[%-.10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[-.10U] : ");
	n1 = ft_printf("[%-.10U]", -12345);
	n2 = printf("[%-.10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10U] : ");
	n1 = ft_printf("[%.10U]", 12345);
	n2 = printf("[%.10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10U] : ");
	n1 = ft_printf("[%.10U]", -12345);
	n2 = printf("[%.10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10U] : ");
	n1 = ft_printf("[%+.10U]", 12345);
	n2 = printf("[%+.10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10U] : ");
	n1 = ft_printf("[%+.10U]", -12345);
	n2 = printf("[%+.10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010U] : ");
	n1 = ft_printf("[%-.010U]", 12345);
	n2 = printf("[%-.010U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010U] : ");
	n1 = ft_printf("[%-.010U]", -12345);
	n2 = printf("[%-.010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010U] : ");
	n1 = ft_printf("[%+.010U]", 12345);
	n2 = printf("[%+.010U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010U] : ");
	n1 = ft_printf("[%+.010U]", -12345);
	n2 = printf("[%+.010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10U] : ");
	n1 = ft_printf("[%.+10U]", 12345);
	n2 = printf("[%.+10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10U] : ");
	n1 = ft_printf("[%.+10U]", -12345);
	n2 = printf("[%.+10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10U] : ");
	n1 = ft_printf("[%.-10U]", 12345);
	n2 = printf("[%.-10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10U] : ");
	n1 = ft_printf("[%.-10U]", -12345);
	n2 = printf("[%.-10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10U] : ");
	n1 = ft_printf("[%+.10U]", 12345);
	n2 = printf("[%+.10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10U] : ");
	n1 = ft_printf("[%+.10U]", -12345);
	n2 = printf("[%+.10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10U] : ");
	n1 = ft_printf("[%-.10U]", 12345);
	n2 = printf("[%-.10U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10U] : ");
	n1 = ft_printf("[%-.10U]", -12345);
	n2 = printf("[%-.10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %d after]", 12345);
	n2 = printf("[before %d after]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %d after]", -12345);
	n2 = printf("[before %d after]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %db \n]", 12345);
	n2 = printf("[a %d b\n]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", -12345);
	n2 = printf("[a %d b\n]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#U] : ");
	n1 = ft_printf("[%#U]", 12345);
	n2 = printf("[%#U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#U] : ");
	n1 = ft_printf("[%#U]", -12345);
	n2 = printf("[%#U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lU] : ");
	n1 = ft_printf("[%lU]", 12345);
	n2 = printf("[%lU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lU] : ");
	n1 = ft_printf("[%lU]", -12345);
	n2 = printf("[%lU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llU] : ");
	n1 = ft_printf("[%llU]", 12345);
	n2 = printf("[%llU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llU] : ");
	n1 = ft_printf("[%llU]", -12345);
	n2 = printf("[%llU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllU] : ");
	n1 = ft_printf("[%lllllU]", 12345);
	n2 = printf("[%lllllU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllllU] : ");
	n1 = ft_printf("[%llllllU]", -12345);
	n2 = printf("[%llllllU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hU] : ");
	n1 = ft_printf("[%hU]", 12345);
	n2 = printf("[%hU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hU] : ");
	n1 = ft_printf("[%hU]", -12345);
	n2 = printf("[%hU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhU] : ");
	n1 = ft_printf("[%hhU]", 12345);
	n2 = printf("[%hhU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhU] : ");
	n1 = ft_printf("[%hhU]", -12345);
	n2 = printf("[%hhU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhU] : ");
	n1 = ft_printf("[%hhU]", -12345);
	n2 = printf("[%hhU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jU] : ");
	n1 = ft_printf("[%jU]", 12345);
	n2 = printf("[%jU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjU] : ");
	n1 = ft_printf("[%jjjU]", -12345);
	n2 = printf("[%jjjU]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjU] : ");
	n1 = ft_printf("[%jjjjU]", 12345);
	n2 = printf("[%jjjjU]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+U] : ");
	n1 = ft_printf("[%+U]", -12345);
	n2 = printf("[%+U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#U] : ");
	n1 = ft_printf("[%#U]", 12345);
	n2 = printf("[%#U]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#U] : ");
	n1 = ft_printf("[%#U]", -12345);
	n2 = printf("[%#U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+-#.10U] : ");
	n1 = ft_printf("[%+-#.10U]", -12345);
	n2 = printf("[%+-#.10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010U] : ");
	n1 = ft_printf("[%++010U]", -12345);
	n2 = printf("[%++010U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-- 10U] : ");
	n1 = ft_printf("[%-- 10U]", -12345);
	n2 = printf("[%-- 10U]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[U][U] : ");
	n1 = ft_printf("[%U][%U]", 88, 12345);
	n2 = printf("[%U][%U]", 88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[U][U] : ");
	n1 = ft_printf("[%U][%U]", -88, 12345);
	n2 = printf("[%U][%U]", -88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[U][U] : ");
	n1 = ft_printf("[%U][%U]", 0, 12345);
	n2 = printf("[%U][%U]", 0, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+-hjl10.4U] : ");
	n1 = ft_printf("[%.+-hjl10.4U]", 88);
	n2 = printf("[%.+-hjl10.4U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8U] : ");
	n1 = ft_printf("[%.10+8U]", 88);
	n2 = printf("[%.10+8U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8U] : ");
	n1 = ft_printf("[%.3.4.8U]", 88);
	n2 = printf("[%.3.4.8U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9U] : ");
	n1 = ft_printf("[%+7+8+9U]", 88);
	n2 = printf("[%+7+8+9U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12-50.0U] : ");
	n1 = ft_printf("[%-12-50.0U]", 88);
	n2 = printf("[%-12-50.0U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100U] : ");
	n1 = ft_printf("[%0100U]", 88);
	n2 = printf("[%0100U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0U] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0U]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[kU] : ");
	n1 = ft_printf("[%kU]", 88);
	n2 = printf("[%kU]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llU] : ");
	n1 = ft_printf("[%llU]", 10.00);
	n2 = printf("[%llU]", 10.00);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhlU] : ");
	n1 = ft_printf("[%lhlU]", 11234);
	n2 = printf("[%lhlU]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhU] : ");
	n1 = ft_printf("[%hlhU]", 11234);
	n2 = printf("[%hlhU]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhU] : ");
	n1 = ft_printf("[%hlhU]", LONG_MAX);
	n2 = printf("[%hlhU]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hU] : ");
	n1 = ft_printf("[%hU]", LONG_MAX);
	n2 = printf("[%hU]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhU] : ");
	n1 = ft_printf("[%hlhU]", LONG_MIN);
	n2 = printf("[%hlhU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +U] : ");
	n1 = ft_printf("[% +U]", LONG_MIN);
	n2 = printf("[% +U]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+-10.4U] : ");
	n1 = ft_printf("[%+-10.4U]", 12);
	n2 = printf("[%+-10.4U]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhU] : ");
	n1 = ft_printf("[%#hlhU]", LONG_MIN);
	n2 = printf("[%#hlhU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +U] : ");
	n1 = ft_printf("[%# +U]", LONG_MIN);
	n2 = printf("[%# +U]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+-10.4U] : ");
	n1 = ft_printf("[%#+-10.4U]", 12);
	n2 = printf("[%#+-10.4U]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.7-13U] : ");
	n1 = ft_printf("[%.7-13U]", 88);
	n2 = printf("[%.7-13U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12.5+3U] : ");
	n1 = ft_printf("[%-12.5+3U]", 88);
	n2 = printf("[%-12.5+3U]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hU] : ");
	n1 = ft_printf("[%010hU]", LONG_MIN);
	n2 = printf("[%010hU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhU] : ");
	n1 = ft_printf("[%010hhU]", LONG_MIN);
	n2 = printf("[%010hhU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lU] : ");
	n1 = ft_printf("[%010lU]", LONG_MIN);
	n2 = printf("[%010lU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010llU] : ");
	n1 = ft_printf("[%010llU]", LONG_MIN);
	n2 = printf("[%010llU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jU] : ");
	n1 = ft_printf("[%010jU]", LONG_MIN);
	n2 = printf("[%010jU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zU] : ");
	n1 = ft_printf("[%010zU]", LONG_MIN);
	n2 = printf("[%010zU]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", CHAR_BIT);
	n2 = printf("[%010U]", CHAR_BIT);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", SCHAR_MIN);
	n2 = printf("[%010U]", SCHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", SCHAR_MAX);
	n2 = printf("[%010U]", SCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", UCHAR_MAX);
	n2 = printf("[%010U]", UCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", CHAR_MIN);
	n2 = printf("[%010U]", CHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", CHAR_MAX);
	n2 = printf("[%010U]", CHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", LONG_MIN);
	n2 = printf("[%010U]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", MB_LEN_MAX);
	n2 = printf("[%010U]", MB_LEN_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", SHRT_MIN);
	n2 = printf("[%010U]", SHRT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", SHRT_MAX);
	n2 = printf("[%010U]", SHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", USHRT_MAX);
	n2 = printf("[%010U]", USHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", INT_MIN);
	n2 = printf("[%010U]", INT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", INT_MAX);
	n2 = printf("[%010U]", INT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", UINT_MAX);
	n2 = printf("[%010U]", UINT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", LONG_MIN);
	n2 = printf("[%010U]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", LONG_MAX);
	n2 = printf("[%010U]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010U] : ");
	n1 = ft_printf("[%010U]", ULONG_MAX);
	n2 = printf("[%010U]", ULONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
