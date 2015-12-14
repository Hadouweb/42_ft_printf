/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/14 05:13:33 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>

int     main(void)
{
	int     n1;
	int     n2;

	setlocale (LC_ALL, "");

	ft_printf("[10d] : ");
	n1 = ft_printf("[%10d]", 12345);
	n2 = printf("[%10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10d] : ");
	n1 = ft_printf("[%10d]", -12345);
	n2 = printf("[%10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10d] : ");
	n1 = ft_printf("[%+10d]", -12345);
	n2 = printf("[%+10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10d] : ");
	n1 = ft_printf("[%+10d]", -12345);
	n2 = printf("[%+10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", 12345);
	n2 = printf("[%010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010d] : ");
	n1 = ft_printf("[%010d]", -12345);
	n2 = printf("[%010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010d] : ");
	n1 = ft_printf("[%+010d]", 12345);
	n2 = printf("[%+010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010d] : ");
	n1 = ft_printf("[%+010d]", -12345);
	n2 = printf("[%+010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", 12345);
	n2 = printf("[%+0d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", -12345);
	n2 = printf("[%+0d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010d] : ");
	n1 = ft_printf("[%.010d]", 12345);
	n2 = printf("[%.010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010d] : ");
	n1 = ft_printf("[%.010d]", -12345);
	n2 = printf("[%.010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010d] : ");
	n1 = ft_printf("[%-010d]", 12345);
	n2 = printf("[%-010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010d] : ");
	n1 = ft_printf("[%-010d]", -12345);
	n2 = printf("[%-010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", 12345);
	n2 = printf("[%-.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", -12345);
	n2 = printf("[%-.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10d] : ");
	n1 = ft_printf("[%.10d]", 12345);
	n2 = printf("[%.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10d] : ");
	n1 = ft_printf("[%.10d]", -12345);
	n2 = printf("[%.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", 12345);
	n2 = printf("[%+.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", -12345);
	n2 = printf("[%+.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010d] : ");
	n1 = ft_printf("[%-.010d]", 12345);
	n2 = printf("[%-.010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010d] : ");
	n1 = ft_printf("[%-.010d]", -12345);
	n2 = printf("[%-.010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010d] : ");
	n1 = ft_printf("[%+.010d]", 12345);
	n2 = printf("[%+.010d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010d] : ");
	n1 = ft_printf("[%+.010d]", -12345);
	n2 = printf("[%+.010d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10d] : ");
	n1 = ft_printf("[%.+10d]", 12345);
	n2 = printf("[%.+10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10d] : ");
	n1 = ft_printf("[%.+10d]", -12345);
	n2 = printf("[%.+10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10d] : ");
	n1 = ft_printf("[%.-10d]", 12345);
	n2 = printf("[%.-10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10d] : ");
	n1 = ft_printf("[%.-10d]", -12345);
	n2 = printf("[%.-10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", 12345);
	n2 = printf("[%+.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10d] : ");
	n1 = ft_printf("[%+.10d]", -12345);
	n2 = printf("[%+.10d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", 12345);
	n2 = printf("[%-.10d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10d] : ");
	n1 = ft_printf("[%-.10d]", -12345);
	n2 = printf("[%-.10d]", -12345);
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

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 12345);
	n2 = printf("[%#d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", -12345);
	n2 = printf("[%#d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ld] : ");
	n1 = ft_printf("[%ld]", 12345);
	n2 = printf("[%ld]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ld] : ");
	n1 = ft_printf("[%ld]", -12345);
	n2 = printf("[%ld]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", 12345);
	n2 = printf("[%lld]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lld] : ");
	n1 = ft_printf("[%lld]", -12345);
	n2 = printf("[%lld]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllld] : ");
	n1 = ft_printf("[%llllld]", 12345);
	n2 = printf("[%llllld]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllld] : ");
	n1 = ft_printf("[%lllllld]", -12345);
	n2 = printf("[%lllllld]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", 12345);
	n2 = printf("[%hd]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hd] : ");
	n1 = ft_printf("[%hd]", -12345);
	n2 = printf("[%hd]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhhd] : ");
	n1 = ft_printf("[%hhd]", 12345);
	n2 = printf("[%hhd]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhhd] : ");
	n1 = ft_printf("[%hhd]", -12345);
	n2 = printf("[%hhd]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhd] : ");
	n1 = ft_printf("[%hhd]", -12345);
	n2 = printf("[%hhd]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jd] : ");
	n1 = ft_printf("[%jd]", 12345);
	n2 = printf("[%jd]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjd] : ");
	n1 = ft_printf("[%jjjd]", -12345);
	n2 = printf("[%jjjd]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjd] : ");
	n1 = ft_printf("[%jjjjd]", 12345);
	n2 = printf("[%jjjjd]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+d] : ");
	n1 = ft_printf("[%+d]", -12345);
	n2 = printf("[%+d]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 12345);
	n2 = printf("[%#d]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", -12345);
	n2 = printf("[%#d]", -12345);
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

	ft_printf("[d][d] : ");
	n1 = ft_printf("[%d][%d]", 88, 12345);
	n2 = printf("[%d][%d]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[d][d] : ");
	n1 = ft_printf("[%d][%d]", -88, 12345);
	n2 = printf("[%d][%d]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("_____________HARD RANDOM____________");

	ft_printf("[d][d] : ");
	n1 = ft_printf("[%d][%d]", 0, 12345);
	n2 = printf("[%d][%d]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4d] : ");
	n1 = ft_printf("[%.+-hjl10.4d]", 88);
	n2 = printf("[%.+-hjl10.4d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8d] : ");
	n1 = ft_printf("[%.10+8d]", 88);
	n2 = printf("[%.10+8d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8d] : ");
	n1 = ft_printf("[%.3.4.8d]", 88);
	n2 = printf("[%.3.4.8d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3d] : ");
	n1 = ft_printf("[%-12.5+3d]", 88);
	n2 = printf("[%-12.5+3d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9d] : ");
	n1 = ft_printf("[%+7+8+9d]", 88);
	n2 = printf("[%+7+8+9d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0d] : ");
	n1 = ft_printf("[%-12-50.0d]", 88);
	n2 = printf("[%-12-50.0d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000d] : ");
	n1 = ft_printf("[%01000d]", 88);
	n2 = printf("[%01000d]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
