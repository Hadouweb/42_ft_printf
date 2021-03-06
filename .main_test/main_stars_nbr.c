/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stars_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 16:15:03 by nle-bret         ###   ########.fr       */
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

	ft_printf("[*d] : ");
	n1 = ft_printf("[%*d]", 10, 12345);
	n2 = printf("[%*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[*d] : ");
	n1 = ft_printf("[%*d]", 10, -12345);
	n2 = printf("[%*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+*d] : ");
	n1 = ft_printf("[%+*d]", 10, -12345);
	n2 = printf("[%+*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+*d] : ");
	n1 = ft_printf("[%+*d]", 10, -12345);
	n2 = printf("[%+*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 10, 12345);
	n2 = printf("[%0*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 10, -12345);
	n2 = printf("[%0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+0*d] : ");
	n1 = ft_printf("[%+0*d]", 10, 12345);
	n2 = printf("[%+0*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0*d] : ");
	n1 = ft_printf("[%+0*d]", 10, -12345);
	n2 = printf("[%+0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", 10, 12345);
	n2 = printf("[%+0d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0d] : ");
	n1 = ft_printf("[%+0d]", 10, -12345);
	n2 = printf("[%+0d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.0*d] : ");
	n1 = ft_printf("[%.0*d]", 10, 12345);
	n2 = printf("[%.0*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.0*d] : ");
	n1 = ft_printf("[%.0*d]", 10, -12345);
	n2 = printf("[%.0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-0*d] : ");
	n1 = ft_printf("[%-0*d]", 10, 12345);
	n2 = printf("[%-0*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-0*d] : ");
	n1 = ft_printf("[%-0*d]", 10, -12345);
	n2 = printf("[%-0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.*d] : ");
	n1 = ft_printf("[%-.*d]", 10, 12345);
	n2 = printf("[%-.*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[-.*d] : ");
	n1 = ft_printf("[%-.*d]", 10, -12345);
	n2 = printf("[%-.*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.*d] : ");
	n1 = ft_printf("[%.*d]", 10, 12345);
	n2 = printf("[%.*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.*d] : ");
	n1 = ft_printf("[%.*d]", 10, -12345);
	n2 = printf("[%.*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.*d] : ");
	n1 = ft_printf("[%+.*d]", 10, 12345);
	n2 = printf("[%+.*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.*d] : ");
	n1 = ft_printf("[%+.*d]", 10, -12345);
	n2 = printf("[%+.*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.0*d] : ");
	n1 = ft_printf("[%-.0*d]", 10, 12345);
	n2 = printf("[%-.0*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.0*d] : ");
	n1 = ft_printf("[%-.0*d]", 10, -12345);
	n2 = printf("[%-.0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.0*d] : ");
	n1 = ft_printf("[%+.0*d]", 10, 12345);
	n2 = printf("[%+.0*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.0*d] : ");
	n1 = ft_printf("[%+.0*d]", 10, -12345);
	n2 = printf("[%+.0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+*d] : ");
	n1 = ft_printf("[%.+*d]", 10, 12345);
	n2 = printf("[%.+*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+*d] : ");
	n1 = ft_printf("[%.+*d]", 10, -12345);
	n2 = printf("[%.+*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-*d] : ");
	n1 = ft_printf("[%.-*d]", 10, 12345);
	n2 = printf("[%.-*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.-*d] : ");
	n1 = ft_printf("[%.-*d]", 10, -12345);
	n2 = printf("[%.-*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.*d] : ");
	n1 = ft_printf("[%+.*d]", 10, 12345);
	n2 = printf("[%+.*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.*d] : ");
	n1 = ft_printf("[%+.*d]", 10, -12345);
	n2 = printf("[%+.*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.*d] : ");
	n1 = ft_printf("[%-.*d]", 10, 12345);
	n2 = printf("[%-.*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-.*d] : ");
	n1 = ft_printf("[%-.*d]", 10, -12345);
	n2 = printf("[%-.*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before *d after] : ");
	n1 = ft_printf("[before %*d after]", 10, 12345);
	n2 = printf("[before %*dd after]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before *d after] : ");
	n1 = ft_printf("[before %*d after]", 10, -12345);
	n2 = printf("[before %*d after]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a *d b\\n] : ");
	n1 = ft_printf("[a %*d b\n]", 10, 12345);
	n2 = printf("[a %*d b\n]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#*d] : ");
	n1 = ft_printf("[%#*d]", 10, 12345);
	n2 = printf("[%#*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[l*d] : ");
	n1 = ft_printf("[%l*d]", 10, 12345);
	n2 = printf("[%l*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[l*d] : ");
	n1 = ft_printf("[%l*d]", 10, -12345);
	n2 = printf("[%l*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ll*d] : ");
	n1 = ft_printf("[%ll*d]", 10, 12345);
	n2 = printf("[%ll*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ll*d] : ");
	n1 = ft_printf("[%ll*d]", 10, -12345);
	n2 = printf("[%ll*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllll*d] : ");
	n1 = ft_printf("[%lllll*d]", 10, 12345);
	n2 = printf("[%lllll*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllll*d] : ");
	n1 = ft_printf("[%llllll*d]", 10, -12345);
	n2 = printf("[%llllll*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[h*d] : ");
	n1 = ft_printf("[%h*d]", 10, 12345);
	n2 = printf("[%h*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[h*d] : ");
	n1 = ft_printf("[%h*d]", 10, -12345);
	n2 = printf("[%h*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhh*d] : ");
	n1 = ft_printf("[%hh*d]", 10, 12345);
	n2 = printf("[%hh*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhh*d] : ");
	n1 = ft_printf("[%hh*d]", 10, -12345);
	n2 = printf("[%hh*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hh*d] : ");
	n1 = ft_printf("[%hh*d]", 10, -12345);
	n2 = printf("[%hh*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[j*d] : ");
	n1 = ft_printf("[%j*d]", 10, 12345);
	n2 = printf("[%j*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjj*d] : ");
	n1 = ft_printf("[%jjj*d]", 10, -12345);
	n2 = printf("[%jjj*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjj*d] : ");
	n1 = ft_printf("[%jjjj*d]", 10, 12345);
	n2 = printf("[%jjjj*d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+*d] : ");
	n1 = ft_printf("[%+*d]", 10, -12345);
	n2 = printf("[%+*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 10, 12345);
	n2 = printf("[%#d]", 10, 12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#d] : ");
	n1 = ft_printf("[%#d]", 10, -12345);
	n2 = printf("[%#d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+-#.*d] : ");
	n1 = ft_printf("[%+-#.*d]", 10, -12345);
	n2 = printf("[%+-#.*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++0*d] : ");
	n1 = ft_printf("[%++0*d]", 10, -12345);
	n2 = printf("[%++0*d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-- *d] : ");
	n1 = ft_printf("[%-- *d]", 10, -12345);
	n2 = printf("[%-- *d]", 10, -12345);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[*d][*d] : ");
	n1 = ft_printf("[%*d][%*d]", 10, 8, 5);
	n2 = printf("[%*d][%*d]", 10, 8, 5);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+-hjl*.4d] : ");
	n1 = ft_printf("[%.+-hjl*.4d]", 3, 88);
	n2 = printf("[%.+-hjl*.4d]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+*d] : ");
	n1 = ft_printf("[%.10+*d]", 3, 88);
	n2 = printf("[%.10+*d]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.*d] : ");
	n1 = ft_printf("[%.3.4.*d]", 3, 88);
	n2 = printf("[%.3.4.*d]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+*+9d] : ");
	n1 = ft_printf("[%+7+*+9d]", 3, 88);
	n2 = printf("[%+7+*+9d]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[-12-50.0d] : ");
	n1 = ft_printf("[%-12-50.0d]", 3, 88);
	n2 = printf("[%-12-50.0d]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100d] : ");
	n1 = ft_printf("[%0100d]", 3, 88);
	n2 = printf("[%0100d]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[kd] : ");
	n1 = ft_printf("[%kd]", 3, 88);
	n2 = printf("[%kd]", 3, 88);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ll*d] : ");
	n1 = ft_printf("[%ll*d]", 5, 10.00);
	n2 = printf("[%ll*d]", 5, 10.00);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhl*d] : ");
	n1 = ft_printf("[%lhl*d]", 13, 11234);
	n2 = printf("[%lhl*d]", 13, 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlh*d] : ");
	n1 = ft_printf("[%hlh*d]", 13, 11234);
	n2 = printf("[%hlh*d]", 13, 11234);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlh*d] : ");
	n1 = ft_printf("[%hlh*d]", 5, LONG_MAX);
	n2 = printf("[%hlh*d]", 5, LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[h*d] : ");
	n1 = ft_printf("[%h*d]", 5, LONG_MAX);
	n2 = printf("[%h*d]", 5, LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlh*d] : ");
	n1 = ft_printf("[%hlh*d]", 5, LONG_MIN);
	n2 = printf("[%hlh*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +*d] : ");
	n1 = ft_printf("[% +*d]", 5, LONG_MIN);
	n2 = printf("[% +*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+-10.4d] : ");
	n1 = ft_printf("[%+-10.4d]", 12);
	n2 = printf("[%+-10.4d]", 12);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlh*d] : ");
	n1 = ft_printf("[%#hlh*d]", 5, LONG_MIN);
	n2 = printf("[%#hlh*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +*d] : ");
	n1 = ft_printf("[%# +*d]", 5, LONG_MIN);
	n2 = printf("[%# +*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010h*d] : ");
	n1 = ft_printf("[%010h*d]", 5, LONG_MIN);
	n2 = printf("[%010h*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hh*d] : ");
	n1 = ft_printf("[%010hh*d]", 5, LONG_MIN);
	n2 = printf("[%010hh*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010l*d] : ");
	n1 = ft_printf("[%010l*d]", 5, LONG_MIN);
	n2 = printf("[%010l*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010ll*d] : ");
	n1 = ft_printf("[%010ll*d]", 5, LONG_MIN);
	n2 = printf("[%010ll*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010j*d] : ");
	n1 = ft_printf("[%010j*d]", 5, LONG_MIN);
	n2 = printf("[%010j*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zd] : ");
	n1 = ft_printf("[%010zd]", 5, LONG_MIN);
	n2 = printf("[%010zd]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, CHAR_BIT);
	n2 = printf("[%0*d]", 6, CHAR_BIT);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, SCHAR_MIN);
	n2 = printf("[%0*d]", 6, SCHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, SCHAR_MAX);
	n2 = printf("[%0*d]", 6, SCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, UCHAR_MAX);
	n2 = printf("[%0*d]", 6, UCHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, CHAR_MIN);
	n2 = printf("[%0*d]", 6, CHAR_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, CHAR_MAX);
	n2 = printf("[%0*d]", 6, CHAR_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 5, LONG_MIN);
	n2 = printf("[%0*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 9, MB_LEN_MAX);
	n2 = printf("[%0*d]", 9, MB_LEN_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, SHRT_MIN);
	n2 = printf("[%0*d]", 6, SHRT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, SHRT_MAX);
	n2 = printf("[%0*d]", 6, SHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, USHRT_MAX);
	n2 = printf("[%0*d]", 6, USHRT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, INT_MIN);
	n2 = printf("[%0*d]", 6, INT_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, INT_MAX);
	n2 = printf("[%0*d]", 6, INT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, UINT_MAX);
	n2 = printf("[%0*d]", 6, UINT_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 5, LONG_MIN);
	n2 = printf("[%0*d]", 5, LONG_MIN);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 5, LONG_MAX);
	n2 = printf("[%0*d]", 5, LONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 6, ULONG_MAX);
	n2 = printf("[%0*d]", 6, ULONG_MAX);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0*d] : ");
	n1 = ft_printf("[%0*d]", 0);
	n2 = printf("[%0*d]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.0*d] : ");
	n1 = ft_printf("[%.0*d]", 0);
	n2 = printf("[%.0*d]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10*d] : ");
	n1 = ft_printf("[%.10*d]", 0);
	n2 = printf("[%.10*d]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10*d] : ");
	n1 = ft_printf("[%10*d]", 0);
	n2 = printf("[%10*d]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+0*d] : ");
	n1 = ft_printf("[%+0*d]", 0);
	n2 = printf("[%+0*d]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
