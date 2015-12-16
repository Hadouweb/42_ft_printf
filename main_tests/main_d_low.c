/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 22:55:59 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10d] : ");
	n1 = ft_printf("[%10d]", 12345);
	n2 = printf("[%10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10d] : ");
	n1 = ft_printf("[%10d]", -12345);
	n2 = printf("[%10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10d] : ");
	n1 = ft_printf("[%+10d]", -12345);
	n2 = printf("[%+10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10d] : ");
	n1 = ft_printf("[%+10d]", -12345);
	n2 = printf("[%+10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", 12345);
	n2 = printf("[%010d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", -12345);
	n2 = printf("[%010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010d] : ");
	n1 = ft_printf("[%+010d]", 12345);
	n2 = printf("[%+010d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010d] : ");
	n1 = ft_printf("[%+010d]", -12345);
	n2 = printf("[%+010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", 12345);
	n2 = printf("[%+0d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", -12345);
	n2 = printf("[%+0d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010d] : ");
	n1 = ft_printf("[%.010d]", 12345);
	n2 = printf("[%.010d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010d] : ");
	n1 = ft_printf("[%.010d]", -12345);
	n2 = printf("[%.010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010d] : ");
	n1 = ft_printf("[%-010d]", 12345);
	n2 = printf("[%-010d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010d] : ");
	n1 = ft_printf("[%-010d]", -12345);
	n2 = printf("[%-010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", 12345);
	n2 = printf("[%-.10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", -12345);
	n2 = printf("[%-.10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10d] : ");
	n1 = ft_printf("[%.10d]", 12345);
	n2 = printf("[%.10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10d] : ");
	n1 = ft_printf("[%.10d]", -12345);
	n2 = printf("[%.10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", 12345);
	n2 = printf("[%+.10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", -12345);
	n2 = printf("[%+.10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010d] : ");
	n1 = ft_printf("[%-.010d]", 12345);
	n2 = printf("[%-.010d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010d] : ");
	n1 = ft_printf("[%-.010d]", -12345);
	n2 = printf("[%-.010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010d] : ");
	n1 = ft_printf("[%+.010d]", 12345);
	n2 = printf("[%+.010d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010d] : ");
	n1 = ft_printf("[%+.010d]", -12345);
	n2 = printf("[%+.010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10d] : ");
	n1 = ft_printf("[%.+10d]", 12345);
	n2 = printf("[%.+10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10d] : ");
	n1 = ft_printf("[%.+10d]", -12345);
	n2 = printf("[%.+10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10d] : ");
	n1 = ft_printf("[%.-10d]", 12345);
	n2 = printf("[%.-10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10d] : ");
	n1 = ft_printf("[%.-10d]", -12345);
	n2 = printf("[%.-10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", 12345);
	n2 = printf("[%+.10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", -12345);
	n2 = printf("[%+.10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", 12345);
	n2 = printf("[%-.10d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", -12345);
	n2 = printf("[%-.10d]", -12345);
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

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 12345);
	n2 = printf("[%#d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", -12345);
	n2 = printf("[%#d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ld] : ");
	n1 = ft_printf("[%ld]", 12345);
	n2 = printf("[%ld]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ld] : ");
	n1 = ft_printf("[%ld]", -12345);
	n2 = printf("[%ld]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", 12345);
	n2 = printf("[%lld]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", -12345);
	n2 = printf("[%lld]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllld] : ");
	n1 = ft_printf("[%llllld]", 12345);
	n2 = printf("[%llllld]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllld] : ");
	n1 = ft_printf("[%lllllld]", -12345);
	n2 = printf("[%lllllld]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", 12345);
	n2 = printf("[%hd]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", -12345);
	n2 = printf("[%hd]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhd] : ");
	n1 = ft_printf("[%hhd]", 12345);
	n2 = printf("[%hhd]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhd] : ");
	n1 = ft_printf("[%hhd]", -12345);
	n2 = printf("[%hhd]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhd] : ");
	n1 = ft_printf("[%hhd]", -12345);
	n2 = printf("[%hhd]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jd] : ");
	n1 = ft_printf("[%jd]", 12345);
	n2 = printf("[%jd]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjd] : ");
	n1 = ft_printf("[%jjjd]", -12345);
	n2 = printf("[%jjjd]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjd] : ");
	n1 = ft_printf("[%jjjjd]", 12345);
	n2 = printf("[%jjjjd]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+d] : ");
	n1 = ft_printf("[%+d]", -12345);
	n2 = printf("[%+d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 12345);
	n2 = printf("[%#d]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", -12345);
	n2 = printf("[%#d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+-#.10d] : ");
	n1 = ft_printf("[%+-#.10d]", -12345);
	n2 = printf("[%+-#.10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010d] : ");
	n1 = ft_printf("[%++010d]", -12345);
	n2 = printf("[%++010d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-- 10d] : ");
	n1 = ft_printf("[%-- 10d]", -12345);
	n2 = printf("[%-- 10d]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[d][d] : ");
	n1 = ft_printf("[%d][%d]", 88, 12345);
	n2 = printf("[%d][%d]", 88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[d][d] : ");
	n1 = ft_printf("[%d][%d]", -88, 12345);
	n2 = printf("[%d][%d]", -88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[d][d] : ");
	n1 = ft_printf("[%d][%d]", 0, 12345);
	n2 = printf("[%d][%d]", 0, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+-hjl10.4d] : ");
	n1 = ft_printf("[%.+-hjl10.4d]", 88);
	n2 = printf("[%.+-hjl10.4d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8d] : ");
	n1 = ft_printf("[%.10+8d]", 88);
	n2 = printf("[%.10+8d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8d] : ");
	n1 = ft_printf("[%.3.4.8d]", 88);
	n2 = printf("[%.3.4.8d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9d] : ");
	n1 = ft_printf("[%+7+8+9d]", 88);
	n2 = printf("[%+7+8+9d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12-50.0d] : ");
	n1 = ft_printf("[%-12-50.0d]", 88);
	n2 = printf("[%-12-50.0d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100d] : ");
	n1 = ft_printf("[%0100d]", 88);
	n2 = printf("[%0100d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0d] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0d]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[qd] : ");
	n1 = ft_printf("[%qd]", 88);
	n2 = printf("[%qd]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", 10.00);
	n2 = printf("[%lld]", 10.00);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhld] : ");
	n1 = ft_printf("[%lhld]", 11234);
	n2 = printf("[%lhld]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhd] : ");
	n1 = ft_printf("[%hlhd]", 11234);
	n2 = printf("[%hlhd]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhd] : ");
	n1 = ft_printf("[%hlhd]", LONG_MAX);
	n2 = printf("[%hlhd]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", LONG_MAX);
	n2 = printf("[%hd]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhd] : ");
	n1 = ft_printf("[%hlhd]", LONG_MIN);
	n2 = printf("[%hlhd]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +d] : ");
	n1 = ft_printf("[% +d]", LONG_MIN);
	n2 = printf("[% +d]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+-10.4d] : ");
	n1 = ft_printf("[%+-10.4d]", 12);
	n2 = printf("[%+-10.4d]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhd] : ");
	n1 = ft_printf("[%#hlhd]", LONG_MIN);
	n2 = printf("[%#hlhd]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +d] : ");
	n1 = ft_printf("[%# +d]", LONG_MIN);
	n2 = printf("[%# +d]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+-10.4d] : ");
	n1 = ft_printf("[%#+-10.4d]", 12);
	n2 = printf("[%#+-10.4d]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.7-13d] : ");
	n1 = ft_printf("[%.7-13d]", 88);
	n2 = printf("[%.7-13d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12.5+3d] : ");
	n1 = ft_printf("[%-12.5+3d]", 88);
	n2 = printf("[%-12.5+3d]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hd] : ");
	n1 = ft_printf("[%010hd]", LONG_MIN);
	n2 = printf("[%010hd]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhd] : ");
	n1 = ft_printf("[%010hhd]", LONG_MIN);
	n2 = printf("[%010hhd]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010ld] : ");
	n1 = ft_printf("[%010ld]", LONG_MIN);
	n2 = printf("[%010ld]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lld] : ");
	n1 = ft_printf("[%010lld]", LONG_MIN);
	n2 = printf("[%010lld]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jd] : ");
	n1 = ft_printf("[%010jd]", LONG_MIN);
	n2 = printf("[%010jd]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zd] : ");
	n1 = ft_printf("[%010zd]", LONG_MIN);
	n2 = printf("[%010zd]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", CHAR_BIT);
	n2 = printf("[%010d]", CHAR_BIT);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", SCHAR_MIN);
	n2 = printf("[%010d]", SCHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", SCHAR_MAX);
	n2 = printf("[%010d]", SCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", UCHAR_MAX);
	n2 = printf("[%010d]", UCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", CHAR_MIN);
	n2 = printf("[%010d]", CHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", CHAR_MAX);
	n2 = printf("[%010d]", CHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", LONG_MIN);
	n2 = printf("[%010d]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", MB_LEN_MAX);
	n2 = printf("[%010d]", MB_LEN_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", SHRT_MIN);
	n2 = printf("[%010d]", SHRT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", SHRT_MAX);
	n2 = printf("[%010d]", SHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", USHRT_MAX);
	n2 = printf("[%010d]", USHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", INT_MIN);
	n2 = printf("[%010d]", INT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", INT_MAX);
	n2 = printf("[%010d]", INT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", UINT_MAX);
	n2 = printf("[%010d]", UINT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", LONG_MIN);
	n2 = printf("[%010d]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", LONG_MAX);
	n2 = printf("[%010d]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", ULONG_MAX);
	n2 = printf("[%010d]", ULONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
