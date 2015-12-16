/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_o_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:32:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/16 21:33:44 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10O] : ");
	n1 = ft_printf("[%10O]", 12345);
	n2 = printf("[%10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[10O] : ");
	n1 = ft_printf("[%10O]", -12345);
	n2 = printf("[%10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+10O] : ");
	n1 = ft_printf("[%+10O]", -12345);
	n2 = printf("[%+10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+10O] : ");
	n1 = ft_printf("[%+10O]", -12345);
	n2 = printf("[%+10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[010O] : ");
	n1 = ft_printf("[%010O]", 12345);
	n2 = printf("[%010O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[010O] : ");
	n1 = ft_printf("[%010O]", -12345);
	n2 = printf("[%010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+010O] : ");
	n1 = ft_printf("[%+010O]", 12345);
	n2 = printf("[%+010O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+010O] : ");
	n1 = ft_printf("[%+010O]", -12345);
	n2 = printf("[%+010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0O] : ");
	n1 = ft_printf("[%+0O]", 12345);
	n2 = printf("[%+0O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[+0O] : ");
	n1 = ft_printf("[%+0O]", -12345);
	n2 = printf("[%+0O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010O] : ");
	n1 = ft_printf("[%.010O]", 12345);
	n2 = printf("[%.010O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.010O] : ");
	n1 = ft_printf("[%.010O]", -12345);
	n2 = printf("[%.010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010O] : ");
	n1 = ft_printf("[%-010O]", 12345);
	n2 = printf("[%-010O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-010O] : ");
	n1 = ft_printf("[%-010O]", -12345);
	n2 = printf("[%-010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10O] : ");
	n1 = ft_printf("[%-.10O]", 12345);
	n2 = printf("[%-.10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[-.10O] : ");
	n1 = ft_printf("[%-.10O]", -12345);
	n2 = printf("[%-.10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10O] : ");
	n1 = ft_printf("[%.10O]", 12345);
	n2 = printf("[%.10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10O] : ");
	n1 = ft_printf("[%.10O]", -12345);
	n2 = printf("[%.10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10O] : ");
	n1 = ft_printf("[%+.10O]", 12345);
	n2 = printf("[%+.10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10O] : ");
	n1 = ft_printf("[%+.10O]", -12345);
	n2 = printf("[%+.10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010O] : ");
	n1 = ft_printf("[%-.010O]", 12345);
	n2 = printf("[%-.010O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.010O] : ");
	n1 = ft_printf("[%-.010O]", -12345);
	n2 = printf("[%-.010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010O] : ");
	n1 = ft_printf("[%+.010O]", 12345);
	n2 = printf("[%+.010O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.010O] : ");
	n1 = ft_printf("[%+.010O]", -12345);
	n2 = printf("[%+.010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10O] : ");
	n1 = ft_printf("[%.+10O]", 12345);
	n2 = printf("[%.+10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+10O] : ");
	n1 = ft_printf("[%.+10O]", -12345);
	n2 = printf("[%.+10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10O] : ");
	n1 = ft_printf("[%.-10O]", 12345);
	n2 = printf("[%.-10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.-10O] : ");
	n1 = ft_printf("[%.-10O]", -12345);
	n2 = printf("[%.-10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10O] : ");
	n1 = ft_printf("[%+.10O]", 12345);
	n2 = printf("[%+.10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+.10O] : ");
	n1 = ft_printf("[%+.10O]", -12345);
	n2 = printf("[%+.10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10O] : ");
	n1 = ft_printf("[%-.10O]", 12345);
	n2 = printf("[%-.10O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-.10O] : ");
	n1 = ft_printf("[%-.10O]", -12345);
	n2 = printf("[%-.10O]", -12345);
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

	ft_printf("[#O] : ");
	n1 = ft_printf("[%#O]", 12345);
	n2 = printf("[%#O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#O] : ");
	n1 = ft_printf("[%#O]", -12345);
	n2 = printf("[%#O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lO] : ");
	n1 = ft_printf("[%lO]", 12345);
	n2 = printf("[%lO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lO] : ");
	n1 = ft_printf("[%lO]", -12345);
	n2 = printf("[%lO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llO] : ");
	n1 = ft_printf("[%llO]", 12345);
	n2 = printf("[%llO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llO] : ");
	n1 = ft_printf("[%llO]", -12345);
	n2 = printf("[%llO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[lllllO] : ");
	n1 = ft_printf("[%lllllO]", 12345);
	n2 = printf("[%lllllO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[llllllO] : ");
	n1 = ft_printf("[%llllllO]", -12345);
	n2 = printf("[%llllllO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hO] : ");
	n1 = ft_printf("[%hO]", 12345);
	n2 = printf("[%hO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hO] : ");
	n1 = ft_printf("[%hO]", -12345);
	n2 = printf("[%hO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	ft_printf("[hhhO] : ");
	n1 = ft_printf("[%hhO]", 12345);
	n2 = printf("[%hhO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhhhO] : ");
	n1 = ft_printf("[%hhO]", -12345);
	n2 = printf("[%hhO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hhO] : ");
	n1 = ft_printf("[%hhO]", -12345);
	n2 = printf("[%hhO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jO] : ");
	n1 = ft_printf("[%jO]", 12345);
	n2 = printf("[%jO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjO] : ");
	n1 = ft_printf("[%jjjO]", -12345);
	n2 = printf("[%jjjO]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[jjjO] : ");
	n1 = ft_printf("[%jjjjO]", 12345);
	n2 = printf("[%jjjjO]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+O] : ");
	n1 = ft_printf("[%+O]", -12345);
	n2 = printf("[%+O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#O] : ");
	n1 = ft_printf("[%#O]", 12345);
	n2 = printf("[%#O]", 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#O] : ");
	n1 = ft_printf("[%#O]", -12345);
	n2 = printf("[%#O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+-#.10O] : ");
	n1 = ft_printf("[%+-#.10O]", -12345);
	n2 = printf("[%+-#.10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[++010O] : ");
	n1 = ft_printf("[%++010O]", -12345);
	n2 = printf("[%++010O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-- 10O] : ");
	n1 = ft_printf("[%-- 10O]", -12345);
	n2 = printf("[%-- 10O]", -12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[O][O] : ");
	n1 = ft_printf("[%O][%O]", 88, 12345);
	n2 = printf("[%O][%O]", 88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[O][O] : ");
	n1 = ft_printf("[%O][%O]", -88, 12345);
	n2 = printf("[%O][%O]", -88, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[O][O] : ");
	n1 = ft_printf("[%O][%O]", 0, 12345);
	n2 = printf("[%O][%O]", 0, 12345);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.+-hjl10.4O] : ");
	n1 = ft_printf("[%.+-hjl10.4O]", 88);
	n2 = printf("[%.+-hjl10.4O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.10+8O] : ");
	n1 = ft_printf("[%.10+8O]", 88);
	n2 = printf("[%.10+8O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.3.4.8O] : ");
	n1 = ft_printf("[%.3.4.8O]", 88);
	n2 = printf("[%.3.4.8O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[+7+8+9O] : ");
	n1 = ft_printf("[%+7+8+9O]", 88);
	n2 = printf("[%+7+8+9O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12-50.0O] : ");
	n1 = ft_printf("[%-12-50.0O]", 88);
	n2 = printf("[%-12-50.0O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[01000O] : ");
	n1 = ft_printf("[%01000O]", 88);
	n2 = printf("[%01000O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[##10.4+lhlhlh16.7-13jjjhhll0O] : ");
	n1 = ft_printf("[%##10.4+lhlhlh16.7-13jjjhhll0O]", 88);
	n2 = printf("[%##10.4+lhlhlh16.7-13jjjhhll0O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[qO] : ");
	n1 = ft_printf("[%qO]", 88);
	n2 = printf("[%qO]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[llO] : ");
	n1 = ft_printf("[%llO]", 10.00);
	n2 = printf("[%llO]", 10.00);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[lhlO] : ");
	n1 = ft_printf("[%lhlO]", 11234);
	n2 = printf("[%lhlO]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhO] : ");
	n1 = ft_printf("[%hlhO]", 11234);
	n2 = printf("[%hlhO]", 11234);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhO] : ");
	n1 = ft_printf("[%hlhO]", LONG_MAX);
	n2 = printf("[%hlhO]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hO] : ");
	n1 = ft_printf("[%hO]", LONG_MAX);
	n2 = printf("[%hO]", LONG_MAX);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[hlhO] : ");
	n1 = ft_printf("[%hlhO]", LONG_MIN);
	n2 = printf("[%hlhO]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[ +O] : ");
	n1 = ft_printf("[% +O]", LONG_MIN);
	n2 = printf("[% +O]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("+-10.4O] : ");
	n1 = ft_printf("[%+-10.4O]", 12);
	n2 = printf("[%+-10.4O]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[#hlhO] : ");
	n1 = ft_printf("[%#hlhO]", LONG_MIN);
	n2 = printf("[%#hlhO]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[# +O] : ");
	n1 = ft_printf("[%# +O]", LONG_MIN);
	n2 = printf("[%# +O]", LONG_MIN);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("#+-10.4O] : ");
	n1 = ft_printf("[%#+-10.4O]", 12);
	n2 = printf("[%#+-10.4O]", 12);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[.7-13O] : ");
	n1 = ft_printf("[%.7-13O]", 88);
	n2 = printf("[%.7-13O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	ft_printf("[-12.5+3O] : ");
	n1 = ft_printf("[%-12.5+3O]", 88);
	n2 = printf("[%-12.5+3O]", 88);
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
