/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_char_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 12:59:58 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 13:08:22 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10c] : ");
	n1 = ft_printf("[%10c]", 'c');
	n2 = printf("[%10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10c] : ");
	n1 = ft_printf("[%10c]", 'c');
	n2 = printf("[%10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10c] : ");
	n1 = ft_printf("[%+10c]", 'c');
	n2 = printf("[%+10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10c] : ");
	n1 = ft_printf("[%+10c]", 'c');
	n2 = printf("[%+10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", 'c');
	n2 = printf("[%010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", 'c');
	n2 = printf("[%010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010c] : ");
	n1 = ft_printf("[%+010c]", 'c');
	n2 = printf("[%+010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010c] : ");
	n1 = ft_printf("[%+010c]", 'c');
	n2 = printf("[%+010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0c] : ");
	n1 = ft_printf("[%+0c]", 'c');
	n2 = printf("[%+0c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0c] : ");
	n1 = ft_printf("[%+0c]", 'c');
	n2 = printf("[%+0c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010c] : ");
	n1 = ft_printf("[%.010c]", 'c');
	n2 = printf("[%.010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010c] : ");
	n1 = ft_printf("[%.010c]", 'c');
	n2 = printf("[%.010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", 'c');
	n2 = printf("[%010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", 'c');
	n2 = printf("[%010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10c] : ");
	n1 = ft_printf("[%+.10c]", 'c');
	n2 = printf("[%+.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10c] : ");
	n1 = ft_printf("[%+.10c]", 'c');
	n2 = printf("[%+.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010c] : ");
	n1 = ft_printf("[%.010c]", 'c');
	n2 = printf("[%.010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010c] : ");
	n1 = ft_printf("[%.010c]", 'c');
	n2 = printf("[%.010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010c] : ");
	n1 = ft_printf("[%+.010c]", 'c');
	n2 = printf("[%+.010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010c] : ");
	n1 = ft_printf("[%+.010c]", 'c');
	n2 = printf("[%+.010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10c] : ");
	n1 = ft_printf("[%.+10c]", 'c');
	n2 = printf("[%.+10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10c] : ");
	n1 = ft_printf("[%.+10c]", 'c');
	n2 = printf("[%.+10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10c] : ");
	n1 = ft_printf("[%+.10c]", 'c');
	n2 = printf("[%+.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10c] : ");
	n1 = ft_printf("[%+.10c]", 'c');
	n2 = printf("[%+.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10c] : ");
	n1 = ft_printf("[%.10c]", 'c');
	n2 = printf("[%.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %c after]", 0);
	n2 = printf("[before %c after]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %c after]", 'c');
	n2 = printf("[before %c after]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", 'c');
	n2 = printf("[a %d b\n]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", 'c');
	n2 = printf("[a %d b\n]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#c] : ");
	n1 = ft_printf("[%#c]", 'c');
	n2 = printf("[%#c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#c] : ");
	n1 = ft_printf("[%#c]", 'c');
	n2 = printf("[%#c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lc] : ");
	n1 = ft_printf("[%lc]", L'Ḛ');
	n2 = printf("[%lc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lc] : ");
	n1 = ft_printf("[%lc]", L'Ḛ');
	n2 = printf("[%lc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llc] : ");
	n1 = ft_printf("[%llc]", L'Ḛ');
	n2 = printf("[%llc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llc] : ");
	n1 = ft_printf("[%llc]", L'Ḛ');
	n2 = printf("[%llc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllc] : ");
	n1 = ft_printf("[%lllllc]", L'Ḛ');
	n2 = printf("[%lllllc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllllc] : ");
	n1 = ft_printf("[%llllllc]", L'Ḛ');
	n2 = printf("[%llllllc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hc] : ");
	n1 = ft_printf("[%hc]", 'c');
	n2 = printf("[%hc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hc] : ");
	n1 = ft_printf("[%hc]", 'c');
	n2 = printf("[%hc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhc] : ");
	n1 = ft_printf("[%hhc]", 'c');
	n2 = printf("[%hhc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhc] : ");
	n1 = ft_printf("[%hhc]", 'c');
	n2 = printf("[%hhc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhc] : ");
	n1 = ft_printf("[%hhc]", 'c');
	n2 = printf("[%hhc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jc] : ");
	n1 = ft_printf("[%jc]", 'c');
	n2 = printf("[%jc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjc] : ");
	n1 = ft_printf("[%jjjc]", 'c');
	n2 = printf("[%jjjc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjc] : ");
	n1 = ft_printf("[%jjjjc]", 'c');
	n2 = printf("[%jjjjc]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+c] : ");
	n1 = ft_printf("[%+c]", 'c');
	n2 = printf("[%+c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#c] : ");
	n1 = ft_printf("[%#c]", 'c');
	n2 = printf("[%#c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#c] : ");
	n1 = ft_printf("[%#c]", 'c');
	n2 = printf("[%#c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+#.10c] : ");
	n1 = ft_printf("[%+#.10c]", 'c');
	n2 = printf("[%+#.10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010c] : ");
	n1 = ft_printf("[%++010c]", 'c');
	n2 = printf("[%++010c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ 10c] : ");
	n1 = ft_printf("[% 10c]", 'c');
	n2 = printf("[% 10c]", 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[c][c] : ");
	n1 = ft_printf("[%c][%c]", '\0', 'c');
	n2 = printf("[%c][%c]", '\0', 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[c][c] : ");
	n1 = ft_printf("[%c][%c]", '\0', 'c');
	n2 = printf("[%c][%c]", '\0', 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[c][c] : ");
	n1 = ft_printf("[%c][%c]", 0, 'c');
	n2 = printf("[%c][%c]", 0, 'c');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+hjl10.4c] : ");
	n1 = ft_printf("[%.+hjl10.4c]", '\0');
	n2 = printf("[%.+hjl10.4c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8c] : ");
	n1 = ft_printf("[%.10+8c]", '\0');
	n2 = printf("[%.10+8c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8c] : ");
	n1 = ft_printf("[%.3.4.8c]", '\0');
	n2 = printf("[%.3.4.8c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9c] : ");
	n1 = ft_printf("[%+7+8+9c]", '\0');
	n2 = printf("[%+7+8+9c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100c] : ");
	n1 = ft_printf("[%0100c]", '\0');
	n2 = printf("[%0100c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[kc] : ");
	n1 = ft_printf("[%kc]", '\0');
	n2 = printf("[%kc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llc] : ");
	n1 = ft_printf("[%llc]", L'Ḛ');
	n2 = printf("[%llc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhlc] : ");
	n1 = ft_printf("[%lhlc]", L'Ḛ');
	n2 = printf("[%lhlc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhc] : ");
	n1 = ft_printf("[%hlhc]", NULL);
	n2 = printf("[%hlhc]", NULL);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhc] : ");
	n1 = ft_printf("[%hlhc]", '\t');
	n2 = printf("[%hlhc]", '\t');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hc] : ");
	n1 = ft_printf("[%hc]", '\t');
	n2 = printf("[%hc]", '\t');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhc] : ");
	n1 = ft_printf("[%hlhc]", '\0');
	n2 = printf("[%hlhc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +c] : ");
	n1 = ft_printf("[% +c]", '\0');
	n2 = printf("[% +c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+10.4c] : ");
	n1 = ft_printf("[%+10.4c]", 200);
	n2 = printf("[%+10.4c]", 200);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhc] : ");
	n1 = ft_printf("[%#hlhc]", '\0');
	n2 = printf("[%#hlhc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +c] : ");
	n1 = ft_printf("[%# +c]", '\0');
	n2 = printf("[%# +c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+10.4c] : ");
	n1 = ft_printf("[%#+10.4c]", 200);
	n2 = printf("[%#+10.4c]", 200);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.713c] : ");
	n1 = ft_printf("[%.713c]", '\0');
	n2 = printf("[%.713c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hc] : ");
	n1 = ft_printf("[%010hc]", '\0');
	n2 = printf("[%010hc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhc] : ");
	n1 = ft_printf("[%010hhc]", '\0');
	n2 = printf("[%010hhc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lc] : ");
	n1 = ft_printf("[%010lc]", L'Ḛ');
	n2 = printf("[%010lc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010llc] : ");
	n1 = ft_printf("[%010llc]", L'Ḛ');
	n2 = printf("[%010llc]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jc] : ");
	n1 = ft_printf("[%010jc]", '\0');
	n2 = printf("[%010jc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zc] : ");
	n1 = ft_printf("[%010zc]", '\0');
	n2 = printf("[%010zc]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", '\0');
	n2 = printf("[%010c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", -1);
	n2 = printf("[%010c]", -1);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", '\0');
	n2 = printf("[%010c]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010c] : ");
	n1 = ft_printf("[%010c]", '\t');
	n2 = printf("[%010c]", '\t');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
