/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:34:28 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 21:34:57 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10x] : ");
	n1 = ft_printf("[%10x]", 12345);
	n2 = printf("[%10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10x] : ");
	n1 = ft_printf("[%10x]", -12345);
	n2 = printf("[%10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10x] : ");
	n1 = ft_printf("[%+10x]", -12345);
	n2 = printf("[%+10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10x] : ");
	n1 = ft_printf("[%+10x]", -12345);
	n2 = printf("[%+10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010x] : ");
	n1 = ft_printf("[%010x]", 12345);
	n2 = printf("[%010x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010x] : ");
	n1 = ft_printf("[%010x]", -12345);
	n2 = printf("[%010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010x] : ");
	n1 = ft_printf("[%+010x]", 12345);
	n2 = printf("[%+010x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010x] : ");
	n1 = ft_printf("[%+010x]", -12345);
	n2 = printf("[%+010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0x] : ");
	n1 = ft_printf("[%+0x]", 12345);
	n2 = printf("[%+0x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0x] : ");
	n1 = ft_printf("[%+0x]", -12345);
	n2 = printf("[%+0x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010x] : ");
	n1 = ft_printf("[%.010x]", 12345);
	n2 = printf("[%.010x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010x] : ");
	n1 = ft_printf("[%.010x]", -12345);
	n2 = printf("[%.010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010x] : ");
	n1 = ft_printf("[%-010x]", 12345);
	n2 = printf("[%-010x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010x] : ");
	n1 = ft_printf("[%-010x]", -12345);
	n2 = printf("[%-010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10x] : ");
	n1 = ft_printf("[%-.10x]", 12345);
	n2 = printf("[%-.10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10x] : ");
	n1 = ft_printf("[%-.10x]", -12345);
	n2 = printf("[%-.10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10x] : ");
	n1 = ft_printf("[%.10x]", 12345);
	n2 = printf("[%.10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10x] : ");
	n1 = ft_printf("[%.10x]", -12345);
	n2 = printf("[%.10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10x] : ");
	n1 = ft_printf("[%+.10x]", 12345);
	n2 = printf("[%+.10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10x] : ");
	n1 = ft_printf("[%+.10x]", -12345);
	n2 = printf("[%+.10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010x] : ");
	n1 = ft_printf("[%-.010x]", 12345);
	n2 = printf("[%-.010x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010x] : ");
	n1 = ft_printf("[%-.010x]", -12345);
	n2 = printf("[%-.010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010x] : ");
	n1 = ft_printf("[%+.010x]", 12345);
	n2 = printf("[%+.010x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010x] : ");
	n1 = ft_printf("[%+.010x]", -12345);
	n2 = printf("[%+.010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10x] : ");
	n1 = ft_printf("[%.+10x]", 12345);
	n2 = printf("[%.+10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10x] : ");
	n1 = ft_printf("[%.+10x]", -12345);
	n2 = printf("[%.+10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10x] : ");
	n1 = ft_printf("[%.-10x]", 12345);
	n2 = printf("[%.-10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10x] : ");
	n1 = ft_printf("[%.-10x]", -12345);
	n2 = printf("[%.-10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10x] : ");
	n1 = ft_printf("[%+.10x]", 12345);
	n2 = printf("[%+.10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10x] : ");
	n1 = ft_printf("[%+.10x]", -12345);
	n2 = printf("[%+.10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10x] : ");
	n1 = ft_printf("[%-.10x]", 12345);
	n2 = printf("[%-.10x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10x] : ");
	n1 = ft_printf("[%-.10x]", -12345);
	n2 = printf("[%-.10x]", -12345);
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

	ft_printf("[#x] : ");
	n1 = ft_printf("[%#x]", 12345);
	n2 = printf("[%#x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#x] : ");
	n1 = ft_printf("[%#x]", -12345);
	n2 = printf("[%#x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lx] : ");
	n1 = ft_printf("[%lx]", 12345);
	n2 = printf("[%lx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lx] : ");
	n1 = ft_printf("[%lx]", -12345);
	n2 = printf("[%lx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llx] : ");
	n1 = ft_printf("[%llx]", 12345);
	n2 = printf("[%llx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llx] : ");
	n1 = ft_printf("[%llx]", -12345);
	n2 = printf("[%llx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllx] : ");
	n1 = ft_printf("[%lllllx]", 12345);
	n2 = printf("[%lllllx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllllx] : ");
	n1 = ft_printf("[%llllllx]", -12345);
	n2 = printf("[%llllllx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hx] : ");
	n1 = ft_printf("[%hx]", 12345);
	n2 = printf("[%hx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hx] : ");
	n1 = ft_printf("[%hx]", -12345);
	n2 = printf("[%hx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhhx] : ");
	n1 = ft_printf("[%hhx]", 12345);
	n2 = printf("[%hhx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhhx] : ");
	n1 = ft_printf("[%hhx]", -12345);
	n2 = printf("[%hhx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhx] : ");
	n1 = ft_printf("[%hhx]", -12345);
	n2 = printf("[%hhx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jx] : ");
	n1 = ft_printf("[%jx]", 12345);
	n2 = printf("[%jx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjx] : ");
	n1 = ft_printf("[%jjjx]", -12345);
	n2 = printf("[%jjjx]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjx] : ");
	n1 = ft_printf("[%jjjjx]", 12345);
	n2 = printf("[%jjjjx]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+x] : ");
	n1 = ft_printf("[%+x]", -12345);
	n2 = printf("[%+x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#x] : ");
	n1 = ft_printf("[%#x]", 12345);
	n2 = printf("[%#x]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#x] : ");
	n1 = ft_printf("[%#x]", -12345);
	n2 = printf("[%#x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10x] : ");
	n1 = ft_printf("[%+-#.10x]", -12345);
	n2 = printf("[%+-#.10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010x] : ");
	n1 = ft_printf("[%++010x]", -12345);
	n2 = printf("[%++010x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10x] : ");
	n1 = ft_printf("[%-- 10x]", -12345);
	n2 = printf("[%-- 10x]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[x][x] : ");
	n1 = ft_printf("[%x][%x]", 88, 12345);
	n2 = printf("[%x][%x]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[x][x] : ");
	n1 = ft_printf("[%x][%x]", -88, 12345);
	n2 = printf("[%x][%x]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[x][x] : ");
	n1 = ft_printf("[%x][%x]", 0, 12345);
	n2 = printf("[%x][%x]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4x] : ");
	n1 = ft_printf("[%.+-hjl10.4x]", 88);
	n2 = printf("[%.+-hjl10.4x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8x] : ");
	n1 = ft_printf("[%.10+8x]", 88);
	n2 = printf("[%.10+8x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8x] : ");
	n1 = ft_printf("[%.3.4.8x]", 88);
	n2 = printf("[%.3.4.8x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9x] : ");
	n1 = ft_printf("[%+7+8+9x]", 88);
	n2 = printf("[%+7+8+9x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0x] : ");
	n1 = ft_printf("[%-12-50.0x]", 88);
	n2 = printf("[%-12-50.0x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000x] : ");
	n1 = ft_printf("[%01000x]", 88);
	n2 = printf("[%01000x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0x] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0x]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[qx] : ");
	n1 = ft_printf("[%qx]", 88);
	n2 = printf("[%qx]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llx] : ");
	n1 = ft_printf("[%llx]", 10.00);
	n2 = printf("[%llx]", 10.00);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lhlx] : ");
	n1 = ft_printf("[%lhlx]", 11234);
	n2 = printf("[%lhlx]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhx] : ");
	n1 = ft_printf("[%hlhx]", 11234);
	n2 = printf("[%hlhx]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhx] : ");
	n1 = ft_printf("[%hlhx]", LONG_MAX);
	n2 = printf("[%hlhx]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hx] : ");
	n1 = ft_printf("[%hx]", LONG_MAX);
	n2 = printf("[%hx]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhx] : ");
	n1 = ft_printf("[%hlhx]", LONG_MIN);
	n2 = printf("[%hlhx]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +x] : ");
	n1 = ft_printf("[% +x]", LONG_MIN);
	n2 = printf("[% +x]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("+-10.4x] : ");
	n1 = ft_printf("[%+-10.4x]", 12);
	n2 = printf("[%+-10.4x]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#hlhx] : ");
	n1 = ft_printf("[%#hlhx]", LONG_MIN);
	n2 = printf("[%#hlhx]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[# +x] : ");
	n1 = ft_printf("[%# +x]", LONG_MIN);
	n2 = printf("[%# +x]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("#+-10.4x] : ");
	n1 = ft_printf("[%#+-10.4x]", 12);
	n2 = printf("[%#+-10.4x]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.7-13x] : ");
	n1 = ft_printf("[%.7-13x]", 88);
	n2 = printf("[%.7-13x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3x] : ");
	n1 = ft_printf("[%-12.5+3x]", 88);
	n2 = printf("[%-12.5+3x]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
