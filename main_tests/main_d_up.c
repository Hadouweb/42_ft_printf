/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 22:57:26 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10D] : ");
	n1 = ft_printf("[%10D]", 12345);
	n2 = printf("[%10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10D] : ");
	n1 = ft_printf("[%10D]", -12345);
	n2 = printf("[%10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10D] : ");
	n1 = ft_printf("[%+10D]", -12345);
	n2 = printf("[%+10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10D] : ");
	n1 = ft_printf("[%+10D]", -12345);
	n2 = printf("[%+10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", 12345);
	n2 = printf("[%010D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", -12345);
	n2 = printf("[%010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010D] : ");
	n1 = ft_printf("[%+010D]", 12345);
	n2 = printf("[%+010D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010D] : ");
	n1 = ft_printf("[%+010D]", -12345);
	n2 = printf("[%+010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0D] : ");
	n1 = ft_printf("[%+0D]", 12345);
	n2 = printf("[%+0D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0D] : ");
	n1 = ft_printf("[%+0D]", -12345);
	n2 = printf("[%+0D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010D] : ");
	n1 = ft_printf("[%.010D]", 12345);
	n2 = printf("[%.010D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010D] : ");
	n1 = ft_printf("[%.010D]", -12345);
	n2 = printf("[%.010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010D] : ");
	n1 = ft_printf("[%-010D]", 12345);
	n2 = printf("[%-010D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-010D] : ");
	n1 = ft_printf("[%-010D]", -12345);
	n2 = printf("[%-010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10D] : ");
	n1 = ft_printf("[%-.10D]", 12345);
	n2 = printf("[%-.10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[-.10D] : ");
	n1 = ft_printf("[%-.10D]", -12345);
	n2 = printf("[%-.10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10D] : ");
	n1 = ft_printf("[%.10D]", 12345);
	n2 = printf("[%.10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10D] : ");
	n1 = ft_printf("[%.10D]", -12345);
	n2 = printf("[%.10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10D] : ");
	n1 = ft_printf("[%+.10D]", 12345);
	n2 = printf("[%+.10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10D] : ");
	n1 = ft_printf("[%+.10D]", -12345);
	n2 = printf("[%+.10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010D] : ");
	n1 = ft_printf("[%-.010D]", 12345);
	n2 = printf("[%-.010D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.010D] : ");
	n1 = ft_printf("[%-.010D]", -12345);
	n2 = printf("[%-.010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010D] : ");
	n1 = ft_printf("[%+.010D]", 12345);
	n2 = printf("[%+.010D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010D] : ");
	n1 = ft_printf("[%+.010D]", -12345);
	n2 = printf("[%+.010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10D] : ");
	n1 = ft_printf("[%.+10D]", 12345);
	n2 = printf("[%.+10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10D] : ");
	n1 = ft_printf("[%.+10D]", -12345);
	n2 = printf("[%.+10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10D] : ");
	n1 = ft_printf("[%.-10D]", 12345);
	n2 = printf("[%.-10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-10D] : ");
	n1 = ft_printf("[%.-10D]", -12345);
	n2 = printf("[%.-10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10D] : ");
	n1 = ft_printf("[%+.10D]", 12345);
	n2 = printf("[%+.10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10D] : ");
	n1 = ft_printf("[%+.10D]", -12345);
	n2 = printf("[%+.10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10D] : ");
	n1 = ft_printf("[%-.10D]", 12345);
	n2 = printf("[%-.10D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.10D] : ");
	n1 = ft_printf("[%-.10D]", -12345);
	n2 = printf("[%-.10D]", -12345);
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

	ft_printf("[#D] : ");
	n1 = ft_printf("[%#D]", 12345);
	n2 = printf("[%#D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#D] : ");
	n1 = ft_printf("[%#D]", -12345);
	n2 = printf("[%#D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lD] : ");
	n1 = ft_printf("[%lD]", 12345);
	n2 = printf("[%lD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lD] : ");
	n1 = ft_printf("[%lD]", -12345);
	n2 = printf("[%lD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llD] : ");
	n1 = ft_printf("[%llD]", 12345);
	n2 = printf("[%llD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llD] : ");
	n1 = ft_printf("[%llD]", -12345);
	n2 = printf("[%llD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllD] : ");
	n1 = ft_printf("[%lllllD]", 12345);
	n2 = printf("[%lllllD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllllD] : ");
	n1 = ft_printf("[%llllllD]", -12345);
	n2 = printf("[%llllllD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hD] : ");
	n1 = ft_printf("[%hD]", 12345);
	n2 = printf("[%hD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hD] : ");
	n1 = ft_printf("[%hD]", -12345);
	n2 = printf("[%hD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhD] : ");
	n1 = ft_printf("[%hhD]", 12345);
	n2 = printf("[%hhD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhD] : ");
	n1 = ft_printf("[%hhD]", -12345);
	n2 = printf("[%hhD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhD] : ");
	n1 = ft_printf("[%hhD]", -12345);
	n2 = printf("[%hhD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jD] : ");
	n1 = ft_printf("[%jD]", 12345);
	n2 = printf("[%jD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjD] : ");
	n1 = ft_printf("[%jjjD]", -12345);
	n2 = printf("[%jjjD]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjD] : ");
	n1 = ft_printf("[%jjjjD]", 12345);
	n2 = printf("[%jjjjD]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+D] : ");
	n1 = ft_printf("[%+D]", -12345);
	n2 = printf("[%+D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#D] : ");
	n1 = ft_printf("[%#D]", 12345);
	n2 = printf("[%#D]", 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#D] : ");
	n1 = ft_printf("[%#D]", -12345);
	n2 = printf("[%#D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+-#.10D] : ");
	n1 = ft_printf("[%+-#.10D]", -12345);
	n2 = printf("[%+-#.10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010D] : ");
	n1 = ft_printf("[%++010D]", -12345);
	n2 = printf("[%++010D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-- 10D] : ");
	n1 = ft_printf("[%-- 10D]", -12345);
	n2 = printf("[%-- 10D]", -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[D][D] : ");
	n1 = ft_printf("[%D][%D]", 88, 12345);
	n2 = printf("[%D][%D]", 88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[D][D] : ");
	n1 = ft_printf("[%D][%D]", -88, 12345);
	n2 = printf("[%D][%D]", -88, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[D][D] : ");
	n1 = ft_printf("[%D][%D]", 0, 12345);
	n2 = printf("[%D][%D]", 0, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+-hjl10.4D] : ");
	n1 = ft_printf("[%.+-hjl10.4D]", 88);
	n2 = printf("[%.+-hjl10.4D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8D] : ");
	n1 = ft_printf("[%.10+8D]", 88);
	n2 = printf("[%.10+8D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8D] : ");
	n1 = ft_printf("[%.3.4.8D]", 88);
	n2 = printf("[%.3.4.8D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9D] : ");
	n1 = ft_printf("[%+7+8+9D]", 88);
	n2 = printf("[%+7+8+9D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12-50.0D] : ");
	n1 = ft_printf("[%-12-50.0D]", 88);
	n2 = printf("[%-12-50.0D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100D] : ");
	n1 = ft_printf("[%0100D]", 88);
	n2 = printf("[%0100D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0D] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0D]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[qD] : ");
	n1 = ft_printf("[%qD]", 88);
	n2 = printf("[%qD]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llD] : ");
	n1 = ft_printf("[%llD]", 10.00);
	n2 = printf("[%llD]", 10.00);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhlD] : ");
	n1 = ft_printf("[%lhlD]", 11234);
	n2 = printf("[%lhlD]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhD] : ");
	n1 = ft_printf("[%hlhD]", 11234);
	n2 = printf("[%hlhD]", 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhD] : ");
	n1 = ft_printf("[%hlhD]", LONG_MAX);
	n2 = printf("[%hlhD]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hD] : ");
	n1 = ft_printf("[%hD]", LONG_MAX);
	n2 = printf("[%hD]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhD] : ");
	n1 = ft_printf("[%hlhD]", LONG_MIN);
	n2 = printf("[%hlhD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +D] : ");
	n1 = ft_printf("[% +D]", LONG_MIN);
	n2 = printf("[% +D]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+-10.4D] : ");
	n1 = ft_printf("[%+-10.4D]", 12);
	n2 = printf("[%+-10.4D]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhD] : ");
	n1 = ft_printf("[%#hlhD]", LONG_MIN);
	n2 = printf("[%#hlhD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +D] : ");
	n1 = ft_printf("[%# +D]", LONG_MIN);
	n2 = printf("[%# +D]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+-10.4D] : ");
	n1 = ft_printf("[%#+-10.4D]", 12);
	n2 = printf("[%#+-10.4D]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.7-13D] : ");
	n1 = ft_printf("[%.7-13D]", 88);
	n2 = printf("[%.7-13D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12.5+3D] : ");
	n1 = ft_printf("[%-12.5+3D]", 88);
	n2 = printf("[%-12.5+3D]", 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hD] : ");
	n1 = ft_printf("[%010hD]", LONG_MIN);
	n2 = printf("[%010hD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhD] : ");
	n1 = ft_printf("[%010hhD]", LONG_MIN);
	n2 = printf("[%010hhD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lD] : ");
	n1 = ft_printf("[%010lD]", LONG_MIN);
	n2 = printf("[%010lD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010llD] : ");
	n1 = ft_printf("[%010llD]", LONG_MIN);
	n2 = printf("[%010llD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jD] : ");
	n1 = ft_printf("[%010jD]", LONG_MIN);
	n2 = printf("[%010jD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zD] : ");
	n1 = ft_printf("[%010zD]", LONG_MIN);
	n2 = printf("[%010zD]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", CHAR_BIT);
	n2 = printf("[%010D]", CHAR_BIT);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", SCHAR_MIN);
	n2 = printf("[%010D]", SCHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", SCHAR_MAX);
	n2 = printf("[%010D]", SCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", UCHAR_MAX);
	n2 = printf("[%010D]", UCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", CHAR_MIN);
	n2 = printf("[%010D]", CHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", CHAR_MAX);
	n2 = printf("[%010D]", CHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", LONG_MIN);
	n2 = printf("[%010D]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", MB_LEN_MAX);
	n2 = printf("[%010D]", MB_LEN_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", SHRT_MIN);
	n2 = printf("[%010D]", SHRT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", SHRT_MAX);
	n2 = printf("[%010D]", SHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", USHRT_MAX);
	n2 = printf("[%010D]", USHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", INT_MIN);
	n2 = printf("[%010D]", INT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", INT_MAX);
	n2 = printf("[%010D]", INT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", UINT_MAX);
	n2 = printf("[%010D]", UINT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", LONG_MIN);
	n2 = printf("[%010D]", LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", LONG_MAX);
	n2 = printf("[%010D]", LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010D] : ");
	n1 = ft_printf("[%010D]", ULONG_MAX);
	n2 = printf("[%010D]", ULONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}