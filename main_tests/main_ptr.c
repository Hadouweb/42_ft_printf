/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 15:21:36 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10p] : ");
	n1 = ft_printf("[%10p]", 12345);
	n2 = printf("[%10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10p] : ");
	n1 = ft_printf("[%10p]", (void *)-1);
	n2 = printf("[%10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10p] : ");
	n1 = ft_printf("[%+10p]", (void *)-1);
	n2 = printf("[%+10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10p] : ");
	n1 = ft_printf("[%+10p]", (void *)-1);
	n2 = printf("[%+10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", 12345);
	n2 = printf("[%010p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", (void *)-1);
	n2 = printf("[%010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010p] : ");
	n1 = ft_printf("[%+010p]", 12345);
	n2 = printf("[%+010p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010p] : ");
	n1 = ft_printf("[%+010p]", (void *)-1);
	n2 = printf("[%+010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010p] : ");
	n1 = ft_printf("[%.010p]", 12345);
	n2 = printf("[%.010p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010p] : ");
	n1 = ft_printf("[%.010p]", (void *)-1);
	n2 = printf("[%.010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010p] : ");
	n1 = ft_printf("[%-010p]", 12345);
	n2 = printf("[%-010p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010p] : ");
	n1 = ft_printf("[%-010p]", (void *)-1);
	n2 = printf("[%-010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10p] : ");
	n1 = ft_printf("[%-.10p]", 12345);
	n2 = printf("[%-.10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[-.10p] : ");
	n1 = ft_printf("[%-.10p]", (void *)-1);
	n2 = printf("[%-.10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10p] : ");
	n1 = ft_printf("[%.10p]", 12345);
	n2 = printf("[%.10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10p] : ");
	n1 = ft_printf("[%.10p]", (void *)-1);
	n2 = printf("[%.10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10p] : ");
	n1 = ft_printf("[%+.10p]", 12345);
	n2 = printf("[%+.10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10p] : ");
	n1 = ft_printf("[%+.10p]", (void *)-1);
	n2 = printf("[%+.10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010p] : ");
	n1 = ft_printf("[%-.010p]", 12345);
	n2 = printf("[%-.010p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010p] : ");
	n1 = ft_printf("[%-.010p]", (void *)-1);
	n2 = printf("[%-.010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010p] : ");
	n1 = ft_printf("[%+.010p]", 12345);
	n2 = printf("[%+.010p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010p] : ");
	n1 = ft_printf("[%+.010p]", (void *)-1);
	n2 = printf("[%+.010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10p] : ");
	n1 = ft_printf("[%.+10p]", 12345);
	n2 = printf("[%.+10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10p] : ");
	n1 = ft_printf("[%.+10p]", (void *)-1);
	n2 = printf("[%.+10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10p] : ");
	n1 = ft_printf("[%.-10p]", 12345);
	n2 = printf("[%.-10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10p] : ");
	n1 = ft_printf("[%.-10p]", (void *)-1);
	n2 = printf("[%.-10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10p] : ");
	n1 = ft_printf("[%+.10p]", 12345);
	n2 = printf("[%+.10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10p] : ");
	n1 = ft_printf("[%+.10p]", (void *)-1);
	n2 = printf("[%+.10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10p] : ");
	n1 = ft_printf("[%-.10p]", 12345);
	n2 = printf("[%-.10p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10p] : ");
	n1 = ft_printf("[%-.10p]", (void *)-1);
	n2 = printf("[%-.10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %d after]", 12345);
	n2 = printf("[before %d after]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %d after]", (void *)-1);
	n2 = printf("[before %d after]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %db \n]", 12345);
	n2 = printf("[a %d b\n]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", (void *)-1);
	n2 = printf("[a %d b\n]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#p] : ");
	n1 = ft_printf("[%#p]", 12345);
	n2 = printf("[%#p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#p] : ");
	n1 = ft_printf("[%#p]", (void *)-1);
	n2 = printf("[%#p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lp] : ");
	n1 = ft_printf("[%lp]", 12345);
	n2 = printf("[%lp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lp] : ");
	n1 = ft_printf("[%lp]", (void *)-1);
	n2 = printf("[%lp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llp] : ");
	n1 = ft_printf("[%llp]", 12345);
	n2 = printf("[%llp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llp] : ");
	n1 = ft_printf("[%llp]", (void *)-1);
	n2 = printf("[%llp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllp] : ");
	n1 = ft_printf("[%lllllp]", 12345);
	n2 = printf("[%lllllp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllllp] : ");
	n1 = ft_printf("[%llllllp]", (void *)-1);
	n2 = printf("[%llllllp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hp] : ");
	n1 = ft_printf("[%hp]", 12345);
	n2 = printf("[%hp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hp] : ");
	n1 = ft_printf("[%hp]", (void *)-1);
	n2 = printf("[%hp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhp] : ");
	n1 = ft_printf("[%hhp]", 12345);
	n2 = printf("[%hhp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhp] : ");
	n1 = ft_printf("[%hhp]", (void *)-1);
	n2 = printf("[%hhp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhp] : ");
	n1 = ft_printf("[%hhp]", (void *)-1);
	n2 = printf("[%hhp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jp] : ");
	n1 = ft_printf("[%jp]", 12345);
	n2 = printf("[%jp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjp] : ");
	n1 = ft_printf("[%jjjp]", (void *)-1);
	n2 = printf("[%jjjp]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjp] : ");
	n1 = ft_printf("[%jjjjp]", 12345);
	n2 = printf("[%jjjjp]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+p] : ");
	n1 = ft_printf("[%+p]", (void *)-1);
	n2 = printf("[%+p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#p] : ");
	n1 = ft_printf("[%#p]", 12345);
	n2 = printf("[%#p]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#p] : ");
	n1 = ft_printf("[%#p]", (void *)-1);
	n2 = printf("[%#p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+-#.10p] : ");
	n1 = ft_printf("[%+-#.10p]", (void *)-1);
	n2 = printf("[%+-#.10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010p] : ");
	n1 = ft_printf("[%++010p]", (void *)-1);
	n2 = printf("[%++010p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-- 10p] : ");
	n1 = ft_printf("[%-- 10p]", (void *)-1);
	n2 = printf("[%-- 10p]", (void *)-1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[p][p] : ");
	n1 = ft_printf("[%p][%p]", 88, 12345);
	n2 = printf("[%p][%p]", 88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[p][p] : ");
	n1 = ft_printf("[%p][%p]", -88, 12345);
	n2 = printf("[%p][%p]", -88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[p][p] : ");
	n1 = ft_printf("[%p][%p]", 0, 12345);
	n2 = printf("[%p][%p]", 0, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+-hjl10.4p] : ");
	n1 = ft_printf("[%.+-hjl10.4p]", 88);
	n2 = printf("[%.+-hjl10.4p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8p] : ");
	n1 = ft_printf("[%.10+8p]", 88);
	n2 = printf("[%.10+8p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8p] : ");
	n1 = ft_printf("[%.3.4.8p]", 88);
	n2 = printf("[%.3.4.8p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9p] : ");
	n1 = ft_printf("[%+7+8+9p]", 88);
	n2 = printf("[%+7+8+9p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12-50.0p] : ");
	n1 = ft_printf("[%-12-50.0p]", 88);
	n2 = printf("[%-12-50.0p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100p] : ");
	n1 = ft_printf("[%0100p]", 88);
	n2 = printf("[%0100p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[kp] : ");
	n1 = ft_printf("[%kp]", 88);
	n2 = printf("[%kp]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llp] : ");
	n1 = ft_printf("[%llp]", 10.00);
	n2 = printf("[%llp]", 10.00);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhlp] : ");
	n1 = ft_printf("[%lhlp]", 11234);
	n2 = printf("[%lhlp]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhp] : ");
	n1 = ft_printf("[%hlhp]", 11234);
	n2 = printf("[%hlhp]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhp] : ");
	n1 = ft_printf("[%hlhp]", LONG_MAX);
	n2 = printf("[%hlhp]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hp] : ");
	n1 = ft_printf("[%hp]", LONG_MAX);
	n2 = printf("[%hp]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhp] : ");
	n1 = ft_printf("[%hlhp]", LONG_MIN);
	n2 = printf("[%hlhp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +p] : ");
	n1 = ft_printf("[% +p]", LONG_MIN);
	n2 = printf("[% +p]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+-10.4p] : ");
	n1 = ft_printf("[%+-10.4p]", 12);
	n2 = printf("[%+-10.4p]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhp] : ");
	n1 = ft_printf("[%#hlhp]", LONG_MIN);
	n2 = printf("[%#hlhp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +p] : ");
	n1 = ft_printf("[%# +p]", LONG_MIN);
	n2 = printf("[%# +p]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+-10.4p] : ");
	n1 = ft_printf("[%#+-10.4p]", 12);
	n2 = printf("[%#+-10.4p]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.7-13p] : ");
	n1 = ft_printf("[%.7-13p]", 88);
	n2 = printf("[%.7-13p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12.5+3p] : ");
	n1 = ft_printf("[%-12.5+3p]", 88);
	n2 = printf("[%-12.5+3p]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hp] : ");
	n1 = ft_printf("[%010hp]", LONG_MIN);
	n2 = printf("[%010hp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhp] : ");
	n1 = ft_printf("[%010hhp]", LONG_MIN);
	n2 = printf("[%010hhp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lp] : ");
	n1 = ft_printf("[%010lp]", LONG_MIN);
	n2 = printf("[%010lp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010llp] : ");
	n1 = ft_printf("[%010llp]", LONG_MIN);
	n2 = printf("[%010llp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jp] : ");
	n1 = ft_printf("[%010jp]", LONG_MIN);
	n2 = printf("[%010jp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zp] : ");
	n1 = ft_printf("[%010zp]", LONG_MIN);
	n2 = printf("[%010zp]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", CHAR_BIT);
	n2 = printf("[%010p]", CHAR_BIT);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", SCHAR_MIN);
	n2 = printf("[%010p]", SCHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", SCHAR_MAX);
	n2 = printf("[%010p]", SCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", UCHAR_MAX);
	n2 = printf("[%010p]", UCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", CHAR_MIN);
	n2 = printf("[%010p]", CHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", CHAR_MAX);
	n2 = printf("[%010p]", CHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", LONG_MIN);
	n2 = printf("[%010p]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", MB_LEN_MAX);
	n2 = printf("[%010p]", MB_LEN_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", SHRT_MIN);
	n2 = printf("[%010p]", SHRT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", SHRT_MAX);
	n2 = printf("[%010p]", SHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", USHRT_MAX);
	n2 = printf("[%010p]", USHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", INT_MIN);
	n2 = printf("[%010p]", INT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", INT_MAX);
	n2 = printf("[%010p]", INT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", UINT_MAX);
	n2 = printf("[%010p]", UINT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", LONG_MIN);
	n2 = printf("[%010p]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", LONG_MAX);
	n2 = printf("[%010p]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010p] : ");
	n1 = ft_printf("[%010p]", ULONG_MAX);
	n2 = printf("[%010p]", ULONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[3p] : ");
	n1 = ft_printf("[%3p]", 0);
	n2 = printf("[%3p]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
