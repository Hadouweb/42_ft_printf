/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:34:35 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 22:02:41 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10X] : ");
	n1 = ft_printf("[%10X]", 12345);
	n2 = printf("[%10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10X] : ");
	n1 = ft_printf("[%10X]", -12345);
	n2 = printf("[%10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10X] : ");
	n1 = ft_printf("[%+10X]", -12345);
	n2 = printf("[%+10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10X] : ");
	n1 = ft_printf("[%+10X]", -12345);
	n2 = printf("[%+10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010X] : ");
	n1 = ft_printf("[%010X]", 12345);
	n2 = printf("[%010X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010X] : ");
	n1 = ft_printf("[%010X]", -12345);
	n2 = printf("[%010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010X] : ");
	n1 = ft_printf("[%+010X]", 12345);
	n2 = printf("[%+010X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010X] : ");
	n1 = ft_printf("[%+010X]", -12345);
	n2 = printf("[%+010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0X] : ");
	n1 = ft_printf("[%+0X]", 12345);
	n2 = printf("[%+0X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0X] : ");
	n1 = ft_printf("[%+0X]", -12345);
	n2 = printf("[%+0X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010X] : ");
	n1 = ft_printf("[%.010X]", 12345);
	n2 = printf("[%.010X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010X] : ");
	n1 = ft_printf("[%.010X]", -12345);
	n2 = printf("[%.010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010X] : ");
	n1 = ft_printf("[%-010X]", 12345);
	n2 = printf("[%-010X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010X] : ");
	n1 = ft_printf("[%-010X]", -12345);
	n2 = printf("[%-010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10X] : ");
	n1 = ft_printf("[%-.10X]", 12345);
	n2 = printf("[%-.10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10X] : ");
	n1 = ft_printf("[%-.10X]", -12345);
	n2 = printf("[%-.10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10X] : ");
	n1 = ft_printf("[%.10X]", 12345);
	n2 = printf("[%.10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10X] : ");
	n1 = ft_printf("[%.10X]", -12345);
	n2 = printf("[%.10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10X] : ");
	n1 = ft_printf("[%+.10X]", 12345);
	n2 = printf("[%+.10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10X] : ");
	n1 = ft_printf("[%+.10X]", -12345);
	n2 = printf("[%+.10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010X] : ");
	n1 = ft_printf("[%-.010X]", 12345);
	n2 = printf("[%-.010X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010X] : ");
	n1 = ft_printf("[%-.010X]", -12345);
	n2 = printf("[%-.010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010X] : ");
	n1 = ft_printf("[%+.010X]", 12345);
	n2 = printf("[%+.010X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010X] : ");
	n1 = ft_printf("[%+.010X]", -12345);
	n2 = printf("[%+.010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10X] : ");
	n1 = ft_printf("[%.+10X]", 12345);
	n2 = printf("[%.+10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10X] : ");
	n1 = ft_printf("[%.+10X]", -12345);
	n2 = printf("[%.+10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10X] : ");
	n1 = ft_printf("[%.-10X]", 12345);
	n2 = printf("[%.-10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10X] : ");
	n1 = ft_printf("[%.-10X]", -12345);
	n2 = printf("[%.-10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10X] : ");
	n1 = ft_printf("[%+.10X]", 12345);
	n2 = printf("[%+.10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10X] : ");
	n1 = ft_printf("[%+.10X]", -12345);
	n2 = printf("[%+.10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10X] : ");
	n1 = ft_printf("[%-.10X]", 12345);
	n2 = printf("[%-.10X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10X] : ");
	n1 = ft_printf("[%-.10X]", -12345);
	n2 = printf("[%-.10X]", -12345);
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

	ft_printf("[#X] : ");
	n1 = ft_printf("[%#X]", 12345);
	n2 = printf("[%#X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#X] : ");
	n1 = ft_printf("[%#X]", -12345);
	n2 = printf("[%#X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lX] : ");
	n1 = ft_printf("[%lX]", 12345);
	n2 = printf("[%lX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lX] : ");
	n1 = ft_printf("[%lX]", -12345);
	n2 = printf("[%lX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llX] : ");
	n1 = ft_printf("[%llX]", 12345);
	n2 = printf("[%llX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llX] : ");
	n1 = ft_printf("[%llX]", -12345);
	n2 = printf("[%llX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllX] : ");
	n1 = ft_printf("[%lllllX]", 12345);
	n2 = printf("[%lllllX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllllX] : ");
	n1 = ft_printf("[%llllllX]", -12345);
	n2 = printf("[%llllllX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hX] : ");
	n1 = ft_printf("[%hX]", 12345);
	n2 = printf("[%hX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hX] : ");
	n1 = ft_printf("[%hX]", -12345);
	n2 = printf("[%hX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhhX] : ");
	n1 = ft_printf("[%hhX]", 12345);
	n2 = printf("[%hhX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhhX] : ");
	n1 = ft_printf("[%hhX]", -12345);
	n2 = printf("[%hhX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhX] : ");
	n1 = ft_printf("[%hhX]", -12345);
	n2 = printf("[%hhX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jX] : ");
	n1 = ft_printf("[%jX]", 12345);
	n2 = printf("[%jX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjX] : ");
	n1 = ft_printf("[%jjjX]", -12345);
	n2 = printf("[%jjjX]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjX] : ");
	n1 = ft_printf("[%jjjjX]", 12345);
	n2 = printf("[%jjjjX]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+X] : ");
	n1 = ft_printf("[%+X]", -12345);
	n2 = printf("[%+X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#X] : ");
	n1 = ft_printf("[%#X]", 12345);
	n2 = printf("[%#X]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#X] : ");
	n1 = ft_printf("[%#X]", -12345);
	n2 = printf("[%#X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10X] : ");
	n1 = ft_printf("[%+-#.10X]", -12345);
	n2 = printf("[%+-#.10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010X] : ");
	n1 = ft_printf("[%++010X]", -12345);
	n2 = printf("[%++010X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10X] : ");
	n1 = ft_printf("[%-- 10X]", -12345);
	n2 = printf("[%-- 10X]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[X][X] : ");
	n1 = ft_printf("[%X][%X]", 88, 12345);
	n2 = printf("[%X][%X]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[X][X] : ");
	n1 = ft_printf("[%X][%X]", -88, 12345);
	n2 = printf("[%X][%X]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[X][X] : ");
	n1 = ft_printf("[%X][%X]", 0, 12345);
	n2 = printf("[%X][%X]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4X] : ");
	n1 = ft_printf("[%.+-hjl10.4X]", 88);
	n2 = printf("[%.+-hjl10.4X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8X] : ");
	n1 = ft_printf("[%.10+8X]", 88);
	n2 = printf("[%.10+8X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8X] : ");
	n1 = ft_printf("[%.3.4.8X]", 88);
	n2 = printf("[%.3.4.8X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9X] : ");
	n1 = ft_printf("[%+7+8+9X]", 88);
	n2 = printf("[%+7+8+9X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0X] : ");
	n1 = ft_printf("[%-12-50.0X]", 88);
	n2 = printf("[%-12-50.0X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000X] : ");
	n1 = ft_printf("[%01000X]", 88);
	n2 = printf("[%01000X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0X] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0X]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[qX] : ");
	n1 = ft_printf("[%qX]", 88);
	n2 = printf("[%qX]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llX] : ");
	n1 = ft_printf("[%llX]", 10.00);
	n2 = printf("[%llX]", 10.00);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lhlX] : ");
	n1 = ft_printf("[%lhlX]", 11234);
	n2 = printf("[%lhlX]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhX] : ");
	n1 = ft_printf("[%hlhX]", 11234);
	n2 = printf("[%hlhX]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhX] : ");
	n1 = ft_printf("[%hlhX]", LONG_MAX);
	n2 = printf("[%hlhX]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hX] : ");
	n1 = ft_printf("[%hX]", LONG_MAX);
	n2 = printf("[%hX]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhX] : ");
	n1 = ft_printf("[%hlhX]", LONG_MIN);
	n2 = printf("[%hlhX]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +X] : ");
	n1 = ft_printf("[% +X]", LONG_MIN);
	n2 = printf("[% +X]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("+-10.4X] : ");
	n1 = ft_printf("[%+-10.4X]", 12);
	n2 = printf("[%+-10.4X]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#hlhX] : ");
	n1 = ft_printf("[%#hlhX]", LONG_MIN);
	n2 = printf("[%#hlhX]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[# +X] : ");
	n1 = ft_printf("[%# +X]", LONG_MIN);
	n2 = printf("[%# +X]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("#+-10.4X] : ");
	n1 = ft_printf("[%#+-10.4X]", 12);
	n2 = printf("[%#+-10.4X]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.7-13X] : ");
	n1 = ft_printf("[%.7-13X]", 88);
	n2 = printf("[%.7-13X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3X] : ");
	n1 = ft_printf("[%-12.5+3X]", 88);
	n2 = printf("[%-12.5+3X]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10X] : ");
	n1 = ft_printf("[%+10X]", -88);
	n2 = printf("[%+10X]", -88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
