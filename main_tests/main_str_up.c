/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 12:43:52 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/17 13:48:43 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10S] : ");
	n1 = ft_printf("[%10S]", L"我是一只猫。");
	n2 = printf("[%10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10S] : ");
	n1 = ft_printf("[%10S]", L"我是一只猫。");
	n2 = printf("[%10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10S] : ");
	n1 = ft_printf("[%+10S]", L"我是一只猫。");
	n2 = printf("[%+10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10S] : ");
	n1 = ft_printf("[%+10S]", L"我是一只猫。");
	n2 = printf("[%+10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"我是一只猫。");
	n2 = printf("[%010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"我是一只猫。");
	n2 = printf("[%010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010S] : ");
	n1 = ft_printf("[%+010S]", L"我是一只猫。");
	n2 = printf("[%+010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010S] : ");
	n1 = ft_printf("[%+010S]", L"我是一只猫。");
	n2 = printf("[%+010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0S] : ");
	n1 = ft_printf("[%+0S]", L"我是一只猫。");
	n2 = printf("[%+0S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0S] : ");
	n1 = ft_printf("[%+0S]", L"我是一只猫。");
	n2 = printf("[%+0S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010S] : ");
	n1 = ft_printf("[%.010S]", L"我是一只猫。");
	n2 = printf("[%.010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010S] : ");
	n1 = ft_printf("[%.010S]", L"我是一只猫。");
	n2 = printf("[%.010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"我是一只猫。");
	n2 = printf("[%010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"我是一只猫。");
	n2 = printf("[%010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10S] : ");
	n1 = ft_printf("[%+.10S]", L"我是一只猫。");
	n2 = printf("[%+.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10S] : ");
	n1 = ft_printf("[%+.10S]", L"我是一只猫。");
	n2 = printf("[%+.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010S] : ");
	n1 = ft_printf("[%.010S]", L"我是一只猫。");
	n2 = printf("[%.010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010S] : ");
	n1 = ft_printf("[%.010S]", L"我是一只猫。");
	n2 = printf("[%.010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010S] : ");
	n1 = ft_printf("[%+.010S]", L"我是一只猫。");
	n2 = printf("[%+.010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010S] : ");
	n1 = ft_printf("[%+.010S]", L"我是一只猫。");
	n2 = printf("[%+.010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10S] : ");
	n1 = ft_printf("[%.+10S]", L"我是一只猫。");
	n2 = printf("[%.+10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10S] : ");
	n1 = ft_printf("[%.+10S]", L"我是一只猫。");
	n2 = printf("[%.+10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10S] : ");
	n1 = ft_printf("[%+.10S]", L"我是一只猫。");
	n2 = printf("[%+.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10S] : ");
	n1 = ft_printf("[%+.10S]", L"我是一只猫。");
	n2 = printf("[%+.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10S] : ");
	n1 = ft_printf("[%.10S]", L"我是一只猫。");
	n2 = printf("[%.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %s after]", 0);
	n2 = printf("[before %s after]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %s after]", L"我是一只猫。");
	n2 = printf("[before %s after]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", L"我是一只猫。");
	n2 = printf("[a %d b\n]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", L"我是一只猫。");
	n2 = printf("[a %d b\n]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#S] : ");
	n1 = ft_printf("[%#S]", L"我是一只猫。");
	n2 = printf("[%#S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#S] : ");
	n1 = ft_printf("[%#S]", L"我是一只猫。");
	n2 = printf("[%#S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lS] : ");
	n1 = ft_printf("[%lS]", L"ϪѨਉൊḚ");
	n2 = printf("[%lS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lS] : ");
	n1 = ft_printf("[%lS]", L"ϪѨਉൊḚ");
	n2 = printf("[%lS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llS] : ");
	n1 = ft_printf("[%llS]", L"ϪѨਉൊḚ");
	n2 = printf("[%llS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llS] : ");
	n1 = ft_printf("[%llS]", L"ϪѨਉൊḚ");
	n2 = printf("[%llS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllS] : ");
	n1 = ft_printf("[%lllllS]", L"ϪѨਉൊḚ");
	n2 = printf("[%lllllS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllllS] : ");
	n1 = ft_printf("[%llllllS]", L"ϪѨਉൊḚ");
	n2 = printf("[%llllllS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hS] : ");
	n1 = ft_printf("[%hS]", L"我是一只猫。");
	n2 = printf("[%hS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hS] : ");
	n1 = ft_printf("[%hS]", L"我是一只猫。");
	n2 = printf("[%hS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhS] : ");
	n1 = ft_printf("[%hhS]", L"我是一只猫。");
	n2 = printf("[%hhS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhS] : ");
	n1 = ft_printf("[%hhS]", L"我是一只猫。");
	n2 = printf("[%hhS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhS] : ");
	n1 = ft_printf("[%hhS]", L"我是一只猫。");
	n2 = printf("[%hhS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jS] : ");
	n1 = ft_printf("[%jS]", L"我是一只猫。");
	n2 = printf("[%jS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjS] : ");
	n1 = ft_printf("[%jjjS]", L"我是一只猫。");
	n2 = printf("[%jjjS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjS] : ");
	n1 = ft_printf("[%jjjjS]", L"我是一只猫。");
	n2 = printf("[%jjjjS]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+S] : ");
	n1 = ft_printf("[%+S]", L"我是一只猫。");
	n2 = printf("[%+S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#S] : ");
	n1 = ft_printf("[%#S]", L"我是一只猫。");
	n2 = printf("[%#S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#S] : ");
	n1 = ft_printf("[%#S]", L"我是一只猫。");
	n2 = printf("[%#S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+#.10S] : ");
	n1 = ft_printf("[%+#.10S]", L"我是一只猫。");
	n2 = printf("[%+#.10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010S] : ");
	n1 = ft_printf("[%++010S]", L"我是一只猫。");
	n2 = printf("[%++010S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ 10S] : ");
	n1 = ft_printf("[% 10S]", L"我是一只猫。");
	n2 = printf("[% 10S]", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[S][S] : ");
	n1 = ft_printf("[%S][%S]", L"我是\0一只猫。", L"我是一只猫。");
	n2 = printf("[%S][%S]", L"我是\0一只猫。", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[S][S] : ");
	n1 = ft_printf("[%S][%S]", L"我是\0一只猫。", L"我是一只猫。");
	n2 = printf("[%S][%S]", L"我是\0一只猫。", L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[S][S] : ");
	n1 = ft_printf("[%S][%S]", 0, L"我是一只猫。");
	n2 = printf("[%S][%S]", 0, L"我是一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+hjl10.4S] : ");
	n1 = ft_printf("[%.+hjl10.4S]", L"我是\0一只猫。");
	n2 = printf("[%.+hjl10.4S]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8S] : ");
	n1 = ft_printf("[%.10+8S]", L"我是\0一只猫。");
	n2 = printf("[%.10+8S]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8S] : ");
	n1 = ft_printf("[%.3.4.8S]", L"我是\0一只猫。");
	n2 = printf("[%.3.4.8S]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9S] : ");
	n1 = ft_printf("[%+7+8+9S]", L"我是\0一只猫。");
	n2 = printf("[%+7+8+9S]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100S] : ");
	n1 = ft_printf("[%0100S]", L"我是\0一只猫。");
	n2 = printf("[%0100S]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[kS] : ");
	n1 = ft_printf("[%kS]", L"我是\0一只猫。");
	n2 = printf("[%kS]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[llS] : ");
	n1 = ft_printf("[%llS]", L"ϪѨਉൊḚ");
	n2 = printf("[%llS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhlS] : ");
	n1 = ft_printf("[%lhlS]", L"ϪѨਉൊḚ");
	n2 = printf("[%lhlS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhS] : ");
	n1 = ft_printf("[%hlhS]", NULL);
	n2 = printf("[%hlhS]", NULL);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhS] : ");
	n1 = ft_printf("[%hlhS]", L"èëêï");
	n2 = printf("[%hlhS]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hS] : ");
	n1 = ft_printf("[%hS]", L"èëêï");
	n2 = printf("[%hS]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hlhS] : ");
	n1 = ft_printf("[%hlhS]", "\0");
	n2 = printf("[%hlhS]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +S] : ");
	n1 = ft_printf("[% +S]", "\0");
	n2 = printf("[% +S]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+10.4S] : ");
	n1 = ft_printf("[%+10.4S]", "\t\t");
	n2 = printf("[%+10.4S]", "\t\t");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#hlhS] : ");
	n1 = ft_printf("[%#hlhS]", "\0");
	n2 = printf("[%#hlhS]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +S] : ");
	n1 = ft_printf("[%# +S]", "\0");
	n2 = printf("[%# +S]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+10.4S] : ");
	n1 = ft_printf("[%#+10.4S]", "\t\t");
	n2 = printf("[%#+10.4S]", "\t\t");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.713S] : ");
	n1 = ft_printf("[%.713S]", L"我是\0一只猫。");
	n2 = printf("[%.713S]", L"我是\0一只猫。");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hS] : ");
	n1 = ft_printf("[%010hS]", "\0");
	n2 = printf("[%010hS]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhS] : ");
	n1 = ft_printf("[%010hhS]", "\0");
	n2 = printf("[%010hhS]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lS] : ");
	n1 = ft_printf("[%010lS]", L"ϪѨਉൊḚ");
	n2 = printf("[%010lS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010llS] : ");
	n1 = ft_printf("[%010llS]", L"ϪѨਉൊḚ");
	n2 = printf("[%010llS]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010jS] : ");
	n1 = ft_printf("[%010jS]", "\0");
	n2 = printf("[%010jS]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zS] : ");
	n1 = ft_printf("[%010zS]", "\0");
	n2 = printf("[%010zS]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", "\0");
	n2 = printf("[%010S]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", "\0");
	n2 = printf("[%010S]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010S] : ");
	n1 = ft_printf("[%010S]", L"èëêï");
	n2 = printf("[%010S]", L"èëêï");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
