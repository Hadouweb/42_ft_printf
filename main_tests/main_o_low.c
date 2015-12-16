/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_o_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:31:17 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 21:32:27 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10o] : ");
	n1 = ft_printf("[%10o]", 12345);
	n2 = printf("[%10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10o] : ");
	n1 = ft_printf("[%10o]", -12345);
	n2 = printf("[%10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10o] : ");
	n1 = ft_printf("[%+10o]", -12345);
	n2 = printf("[%+10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10o] : ");
	n1 = ft_printf("[%+10o]", -12345);
	n2 = printf("[%+10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010o] : ");
	n1 = ft_printf("[%010o]", 12345);
	n2 = printf("[%010o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010o] : ");
	n1 = ft_printf("[%010o]", -12345);
	n2 = printf("[%010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010o] : ");
	n1 = ft_printf("[%+010o]", 12345);
	n2 = printf("[%+010o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010o] : ");
	n1 = ft_printf("[%+010o]", -12345);
	n2 = printf("[%+010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0o] : ");
	n1 = ft_printf("[%+0o]", 12345);
	n2 = printf("[%+0o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0o] : ");
	n1 = ft_printf("[%+0o]", -12345);
	n2 = printf("[%+0o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010o] : ");
	n1 = ft_printf("[%.010o]", 12345);
	n2 = printf("[%.010o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010o] : ");
	n1 = ft_printf("[%.010o]", -12345);
	n2 = printf("[%.010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010o] : ");
	n1 = ft_printf("[%-010o]", 12345);
	n2 = printf("[%-010o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010o] : ");
	n1 = ft_printf("[%-010o]", -12345);
	n2 = printf("[%-010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10o] : ");
	n1 = ft_printf("[%-.10o]", 12345);
	n2 = printf("[%-.10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10o] : ");
	n1 = ft_printf("[%-.10o]", -12345);
	n2 = printf("[%-.10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10o] : ");
	n1 = ft_printf("[%.10o]", 12345);
	n2 = printf("[%.10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10o] : ");
	n1 = ft_printf("[%.10o]", -12345);
	n2 = printf("[%.10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10o] : ");
	n1 = ft_printf("[%+.10o]", 12345);
	n2 = printf("[%+.10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10o] : ");
	n1 = ft_printf("[%+.10o]", -12345);
	n2 = printf("[%+.10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010o] : ");
	n1 = ft_printf("[%-.010o]", 12345);
	n2 = printf("[%-.010o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010o] : ");
	n1 = ft_printf("[%-.010o]", -12345);
	n2 = printf("[%-.010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010o] : ");
	n1 = ft_printf("[%+.010o]", 12345);
	n2 = printf("[%+.010o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010o] : ");
	n1 = ft_printf("[%+.010o]", -12345);
	n2 = printf("[%+.010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10o] : ");
	n1 = ft_printf("[%.+10o]", 12345);
	n2 = printf("[%.+10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10o] : ");
	n1 = ft_printf("[%.+10o]", -12345);
	n2 = printf("[%.+10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10o] : ");
	n1 = ft_printf("[%.-10o]", 12345);
	n2 = printf("[%.-10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10o] : ");
	n1 = ft_printf("[%.-10o]", -12345);
	n2 = printf("[%.-10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10o] : ");
	n1 = ft_printf("[%+.10o]", 12345);
	n2 = printf("[%+.10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10o] : ");
	n1 = ft_printf("[%+.10o]", -12345);
	n2 = printf("[%+.10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10o] : ");
	n1 = ft_printf("[%-.10o]", 12345);
	n2 = printf("[%-.10o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10o] : ");
	n1 = ft_printf("[%-.10o]", -12345);
	n2 = printf("[%-.10o]", -12345);
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

	ft_printf("[#o] : ");
	n1 = ft_printf("[%#o]", 12345);
	n2 = printf("[%#o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#o] : ");
	n1 = ft_printf("[%#o]", -12345);
	n2 = printf("[%#o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lo] : ");
	n1 = ft_printf("[%lo]", 12345);
	n2 = printf("[%lo]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lo] : ");
	n1 = ft_printf("[%lo]", -12345);
	n2 = printf("[%lo]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llo] : ");
	n1 = ft_printf("[%llo]", 12345);
	n2 = printf("[%llo]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llo] : ");
	n1 = ft_printf("[%llo]", -12345);
	n2 = printf("[%llo]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllo] : ");
	n1 = ft_printf("[%lllllo]", 12345);
	n2 = printf("[%lllllo]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllllo] : ");
	n1 = ft_printf("[%llllllo]", -12345);
	n2 = printf("[%llllllo]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ho] : ");
	n1 = ft_printf("[%ho]", 12345);
	n2 = printf("[%ho]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[ho] : ");
	n1 = ft_printf("[%ho]", -12345);
	n2 = printf("[%ho]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhho] : ");
	n1 = ft_printf("[%hho]", 12345);
	n2 = printf("[%hho]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhho] : ");
	n1 = ft_printf("[%hho]", -12345);
	n2 = printf("[%hho]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hho] : ");
	n1 = ft_printf("[%hho]", -12345);
	n2 = printf("[%hho]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jo] : ");
	n1 = ft_printf("[%jo]", 12345);
	n2 = printf("[%jo]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjo] : ");
	n1 = ft_printf("[%jjjo]", -12345);
	n2 = printf("[%jjjo]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjo] : ");
	n1 = ft_printf("[%jjjjo]", 12345);
	n2 = printf("[%jjjjo]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+o] : ");
	n1 = ft_printf("[%+o]", -12345);
	n2 = printf("[%+o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#o] : ");
	n1 = ft_printf("[%#o]", 12345);
	n2 = printf("[%#o]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#o] : ");
	n1 = ft_printf("[%#o]", -12345);
	n2 = printf("[%#o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10o] : ");
	n1 = ft_printf("[%+-#.10o]", -12345);
	n2 = printf("[%+-#.10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010o] : ");
	n1 = ft_printf("[%++010o]", -12345);
	n2 = printf("[%++010o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10o] : ");
	n1 = ft_printf("[%-- 10o]", -12345);
	n2 = printf("[%-- 10o]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[o][o] : ");
	n1 = ft_printf("[%o][%o]", 88, 12345);
	n2 = printf("[%o][%o]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[o][o] : ");
	n1 = ft_printf("[%o][%o]", -88, 12345);
	n2 = printf("[%o][%o]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[o][o] : ");
	n1 = ft_printf("[%o][%o]", 0, 12345);
	n2 = printf("[%o][%o]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4o] : ");
	n1 = ft_printf("[%.+-hjl10.4o]", 88);
	n2 = printf("[%.+-hjl10.4o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8o] : ");
	n1 = ft_printf("[%.10+8o]", 88);
	n2 = printf("[%.10+8o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8o] : ");
	n1 = ft_printf("[%.3.4.8o]", 88);
	n2 = printf("[%.3.4.8o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9o] : ");
	n1 = ft_printf("[%+7+8+9o]", 88);
	n2 = printf("[%+7+8+9o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0o] : ");
	n1 = ft_printf("[%-12-50.0o]", 88);
	n2 = printf("[%-12-50.0o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000o] : ");
	n1 = ft_printf("[%01000o]", 88);
	n2 = printf("[%01000o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0o] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0o]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[qo] : ");
	n1 = ft_printf("[%qo]", 88);
	n2 = printf("[%qo]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llo] : ");
	n1 = ft_printf("[%llo]", 10.00);
	n2 = printf("[%llo]", 10.00);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lhlo] : ");
	n1 = ft_printf("[%lhlo]", 11234);
	n2 = printf("[%lhlo]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlho] : ");
	n1 = ft_printf("[%hlho]", 11234);
	n2 = printf("[%hlho]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlho] : ");
	n1 = ft_printf("[%hlho]", LONG_MAX);
	n2 = printf("[%hlho]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ho] : ");
	n1 = ft_printf("[%ho]", LONG_MAX);
	n2 = printf("[%ho]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlho] : ");
	n1 = ft_printf("[%hlho]", LONG_MIN);
	n2 = printf("[%hlho]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +o] : ");
	n1 = ft_printf("[% +o]", LONG_MIN);
	n2 = printf("[% +o]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("+-10.4o] : ");
	n1 = ft_printf("[%+-10.4o]", 12);
	n2 = printf("[%+-10.4o]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#hlho] : ");
	n1 = ft_printf("[%#hlho]", LONG_MIN);
	n2 = printf("[%#hlho]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[# +o] : ");
	n1 = ft_printf("[%# +o]", LONG_MIN);
	n2 = printf("[%# +o]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("#+-10.4o] : ");
	n1 = ft_printf("[%#+-10.4o]", 12);
	n2 = printf("[%#+-10.4o]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.7-13o] : ");
	n1 = ft_printf("[%.7-13o]", 88);
	n2 = printf("[%.7-13o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3o] : ");
	n1 = ft_printf("[%-12.5+3o]", 88);
	n2 = printf("[%-12.5+3o]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
