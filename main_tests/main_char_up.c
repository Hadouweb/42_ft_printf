/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_char_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 12:59:58 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 18:11:31 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10C] : ");
	n1 = ft_printf("[%10C]", L'是');
	n2 = printf("[%10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10C] : ");
	n1 = ft_printf("[%10C]", L'是');
	n2 = printf("[%10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10C] : ");
	n1 = ft_printf("[%+10C]", L'是');
	n2 = printf("[%+10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10C] : ");
	n1 = ft_printf("[%+10C]", L'是');
	n2 = printf("[%+10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'是');
	n2 = printf("[%010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'是');
	n2 = printf("[%010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010C] : ");
	n1 = ft_printf("[%+010C]", L'是');
	n2 = printf("[%+010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010C] : ");
	n1 = ft_printf("[%+010C]", L'是');
	n2 = printf("[%+010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0C] : ");
	n1 = ft_printf("[%+0C]", L'是');
	n2 = printf("[%+0C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0C] : ");
	n1 = ft_printf("[%+0C]", L'是');
	n2 = printf("[%+0C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010C] : ");
	n1 = ft_printf("[%.010C]", L'是');
	n2 = printf("[%.010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010C] : ");
	n1 = ft_printf("[%.010C]", L'是');
	n2 = printf("[%.010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'是');
	n2 = printf("[%010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'是');
	n2 = printf("[%010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10C] : ");
	n1 = ft_printf("[%+.10C]", L'是');
	n2 = printf("[%+.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10C] : ");
	n1 = ft_printf("[%+.10C]", L'是');
	n2 = printf("[%+.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010C] : ");
	n1 = ft_printf("[%.010C]", L'是');
	n2 = printf("[%.010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010C] : ");
	n1 = ft_printf("[%.010C]", L'是');
	n2 = printf("[%.010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010C] : ");
	n1 = ft_printf("[%+.010C]", L'是');
	n2 = printf("[%+.010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010C] : ");
	n1 = ft_printf("[%+.010C]", L'是');
	n2 = printf("[%+.010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10C] : ");
	n1 = ft_printf("[%+.10C]", L'是');
	n2 = printf("[%+.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10C] : ");
	n1 = ft_printf("[%+.10C]", L'是');
	n2 = printf("[%+.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", L'是');
	n2 = printf("[%.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %c after]", 0);
	n2 = printf("[before %c after]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %c after]", L'是');
	n2 = printf("[before %c after]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", L'是');
	n2 = printf("[a %d b\n]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", L'是');
	n2 = printf("[a %d b\n]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#C] : ");
	n1 = ft_printf("[%#C]", L'是');
	n2 = printf("[%#C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#C] : ");
	n1 = ft_printf("[%#C]", L'是');
	n2 = printf("[%#C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lC] : ");
	n1 = ft_printf("[%lC]", L'Ḛ');
	n2 = printf("[%lC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lC] : ");
	n1 = ft_printf("[%lC]", L'Ḛ');
	n2 = printf("[%lC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llC] : ");
	n1 = ft_printf("[%llC]", L'Ḛ');
	n2 = printf("[%llC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llC] : ");
	n1 = ft_printf("[%llC]", L'Ḛ');
	n2 = printf("[%llC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllC] : ");
	n1 = ft_printf("[%lllllC]", L'Ḛ');
	n2 = printf("[%lllllC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllllC] : ");
	n1 = ft_printf("[%llllllC]", L'Ḛ');
	n2 = printf("[%llllllC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hC] : ");
	n1 = ft_printf("[%hC]", L'是');
	n2 = printf("[%hC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhC] : ");
	n1 = ft_printf("[%hhC]", L'是');
	n2 = printf("[%hhC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhC] : ");
	n1 = ft_printf("[%hhC]", L'是');
	n2 = printf("[%hhC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhC] : ");
	n1 = ft_printf("[%hhC]", L'是');
	n2 = printf("[%hhC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jC] : ");
	n1 = ft_printf("[%jC]", L'是');
	n2 = printf("[%jC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjC] : ");
	n1 = ft_printf("[%jjjC]", L'是');
	n2 = printf("[%jjjC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjC] : ");
	n1 = ft_printf("[%jjjjC]", L'是');
	n2 = printf("[%jjjjC]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+C] : ");
	n1 = ft_printf("[%+C]", L'是');
	n2 = printf("[%+C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#C] : ");
	n1 = ft_printf("[%#C]", L'是');
	n2 = printf("[%#C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#C] : ");
	n1 = ft_printf("[%#C]", L'是');
	n2 = printf("[%#C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+#.10C] : ");
	n1 = ft_printf("[%+#.10C]", L'是');
	n2 = printf("[%+#.10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010C] : ");
	n1 = ft_printf("[%++010C]", L'是');
	n2 = printf("[%++010C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ 10C] : ");
	n1 = ft_printf("[% 10C]", L'是');
	n2 = printf("[% 10C]", L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[C][C] : ");
	n1 = ft_printf("[%C][%C]", '\0', L'是');
	n2 = printf("[%C][%C]", '\0', L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[C][C] : ");
	n1 = ft_printf("[%C][%C]", '\0', L'是');
	n2 = printf("[%C][%C]", '\0', L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[C][C] : ");
	n1 = ft_printf("[%C][%C]", 0, L'是');
	n2 = printf("[%C][%C]", 0, L'是');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+hjl10.4C] : ");
	n1 = ft_printf("[%.+hjl10.4C]", '\0');
	n2 = printf("[%.+hjl10.4C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8C] : ");
	n1 = ft_printf("[%.10+8C]", '\0');
	n2 = printf("[%.10+8C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8C] : ");
	n1 = ft_printf("[%.3.4.8C]", '\0');
	n2 = printf("[%.3.4.8C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9C] : ");
	n1 = ft_printf("[%+7+8+9C]", '\0');
	n2 = printf("[%+7+8+9C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100C] : ");
	n1 = ft_printf("[%0100C]", '\0');
	n2 = printf("[%0100C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[kC] : ");
	n1 = ft_printf("[%kC]", '\0');
	n2 = printf("[%kC]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llC] : ");
	n1 = ft_printf("[%llC]", L'Ḛ');
	n2 = printf("[%llC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhlC] : ");
	n1 = ft_printf("[%lhlC]", L'Ḛ');
	n2 = printf("[%lhlC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhC] : ");
	n1 = ft_printf("[%hlhC]", NULL);
	n2 = printf("[%hlhC]", NULL);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhC] : ");
	n1 = ft_printf("[%hlhC]", '\t');
	n2 = printf("[%hlhC]", '\t');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhC] : ");
	n1 = ft_printf("[%hlhC]", '\0');
	n2 = printf("[%hlhC]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +C] : ");
	n1 = ft_printf("[% +C]", '\0');
	n2 = printf("[% +C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+10.4C] : ");
	n1 = ft_printf("[%+10.4C]", 200);
	n2 = printf("[%+10.4C]", 200);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhC] : ");
	n1 = ft_printf("[%#hlhC]", '\0');
	n2 = printf("[%#hlhC]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +C] : ");
	n1 = ft_printf("[%# +C]", '\0');
	n2 = printf("[%# +C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+10.4C] : ");
	n1 = ft_printf("[%#+10.4C]", 200);
	n2 = printf("[%#+10.4C]", 200);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.713C] : ");
	n1 = ft_printf("[%.713C]", '\0');
	n2 = printf("[%.713C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hC] : ");
	n1 = ft_printf("[%010hC]", '\0');
	n2 = printf("[%010hC]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhC] : ");
	n1 = ft_printf("[%010hhC]", L'祇');
	n2 = printf("[%010hhC]", L'祇');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lC] : ");
	n1 = ft_printf("[%010lC]", L'Ḛ');
	n2 = printf("[%010lC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010llC] : ");
	n1 = ft_printf("[%010llC]", L'Ḛ');
	n2 = printf("[%010llC]", L'Ḛ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jC] : ");
	n1 = ft_printf("[%010jC]", '\0');
	n2 = printf("[%010jC]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zC] : ");
	n1 = ft_printf("[%010zC]", '\0');
	n2 = printf("[%010zC]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'鰘');
	n2 = printf("[%010C]", L'鰘');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'ꕑ');
	n2 = printf("[%010C]", L'ꕑ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'ꗞ');
	n2 = printf("[%010C]", L'ꗞ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'꧅');
	n2 = printf("[%010C]", L'꧅');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'ꤡ');
	n2 = printf("[%010C]", L'ꤡ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'ꬥ');
	n2 = printf("[%010C]", L'ꬥ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", '\0');
	n2 = printf("[%010C]", '\0');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'갨');
	n2 = printf("[%010C]", L'갨');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'갨');
	n2 = printf("[%010C]", L'갨');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'ē');
	n2 = printf("[%010C]", L'ē');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'í');
	n2 = printf("[%010C]", L'í');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'米');
	n2 = printf("[%010C]", L'米');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'œ');
	n2 = printf("[%010C]", L'œ');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'ç');
	n2 = printf("[%010C]", L'ç');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", L'');
	n2 = printf("[%010C]", L'');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010C] : ");
	n1 = ft_printf("[%010C]", '\t');
	n2 = printf("[%010C]", '\t');
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0C] : ");
	n1 = ft_printf("[%0C]", 0);
	n2 = printf("[%0C]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.0C] : ");
	n1 = ft_printf("[%.0C]", 0);
	n2 = printf("[%.0C]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10C] : ");
	n1 = ft_printf("[%.10C]", 0);
	n2 = printf("[%.10C]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10C] : ");
	n1 = ft_printf("[%10C]", 0);
	n2 = printf("[%10C]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+0C] : ");
	n1 = ft_printf("[%+0C]", 0);
	n2 = printf("[%+0C]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
