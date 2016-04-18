/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_low.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 12:43:52 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 16:15:38 by nle-bret         ###   ########.fr       */
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

	ft_printf("[10s] : ");
	n1 = ft_printf("[%10s]", "Bla bla bla ll lol%");
	n2 = printf("[%10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10s] : ");
	n1 = ft_printf("[%10s]", "Bla bla bla ll lol%");
	n2 = printf("[%10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+10s] : ");
	n1 = ft_printf("[%+10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+10s] : ");
	n1 = ft_printf("[%+10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "Bla bla bla ll lol%");
	n2 = printf("[%010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "Bla bla bla ll lol%");
	n2 = printf("[%010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+010s] : ");
	n1 = ft_printf("[%+010s]", "Bla bla bla ll lol%");
	n2 = printf("[%+010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+010s] : ");
	n1 = ft_printf("[%+010s]", "Bla bla bla ll lol%");
	n2 = printf("[%+010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0s] : ");
	n1 = ft_printf("[%+0s]", "Bla bla bla ll lol%");
	n2 = printf("[%+0s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[+0s] : ");
	n1 = ft_printf("[%+0s]", "Bla bla bla ll lol%");
	n2 = printf("[%+0s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010s] : ");
	n1 = ft_printf("[%.010s]", "Bla bla bla ll lol%");
	n2 = printf("[%.010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010s] : ");
	n1 = ft_printf("[%.010s]", "Bla bla bla ll lol%");
	n2 = printf("[%.010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "Bla bla bla ll lol%");
	n2 = printf("[%010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "Bla bla bla ll lol%");
	n2 = printf("[%010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10s] : ");
	n1 = ft_printf("[%+.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10s] : ");
	n1 = ft_printf("[%+.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010s] : ");
	n1 = ft_printf("[%.010s]", "Bla bla bla ll lol%");
	n2 = printf("[%.010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.010s] : ");
	n1 = ft_printf("[%.010s]", "Bla bla bla ll lol%");
	n2 = printf("[%.010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010s] : ");
	n1 = ft_printf("[%+.010s]", "Bla bla bla ll lol%");
	n2 = printf("[%+.010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.010s] : ");
	n1 = ft_printf("[%+.010s]", "Bla bla bla ll lol%");
	n2 = printf("[%+.010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10s] : ");
	n1 = ft_printf("[%.+10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.+10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.+10s] : ");
	n1 = ft_printf("[%.+10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.+10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10s] : ");
	n1 = ft_printf("[%+.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+.10s] : ");
	n1 = ft_printf("[%+.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %s after]", 0);
	n2 = printf("[before %s after]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[before d after] : ");
	n1 = ft_printf("[before %s after]", "Bla bla bla ll lol%");
	n2 = printf("[before %s after]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", "Bla bla bla ll lol%");
	n2 = printf("[a %d b\n]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[a d b\\n] : ");
	n1 = ft_printf("[a %d b\n]", "Bla bla bla ll lol%");
	n2 = printf("[a %d b\n]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#s] : ");
	n1 = ft_printf("[%#s]", "Bla bla bla ll lol%");
	n2 = printf("[%#s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#s] : ");
	n1 = ft_printf("[%#s]", "Bla bla bla ll lol%");
	n2 = printf("[%#s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ls] : ");
	n1 = ft_printf("[%ls]", L"ϪѨਉൊḚ");
	n2 = printf("[%ls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ls] : ");
	n1 = ft_printf("[%ls]", L"ϪѨਉൊḚ");
	n2 = printf("[%ls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lls] : ");
	n1 = ft_printf("[%lls]", L"ϪѨਉൊḚ");
	n2 = printf("[%lls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lls] : ");
	n1 = ft_printf("[%lls]", L"ϪѨਉൊḚ");
	n2 = printf("[%lls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[llllls] : ");
	n1 = ft_printf("[%llllls]", L"ϪѨਉൊḚ");
	n2 = printf("[%llllls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[lllllls] : ");
	n1 = ft_printf("[%lllllls]", L"ϪѨਉൊḚ");
	n2 = printf("[%lllllls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hs] : ");
	n1 = ft_printf("[%hs]", "Bla bla bla ll lol%");
	n2 = printf("[%hs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hs] : ");
	n1 = ft_printf("[%hs]", "Bla bla bla ll lol%");
	n2 = printf("[%hs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_printf("[hhhs] : ");
	n1 = ft_printf("[%hhs]", "Bla bla bla ll lol%");
	n2 = printf("[%hhs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhhhs] : ");
	n1 = ft_printf("[%hhs]", "Bla bla bla ll lol%");
	n2 = printf("[%hhs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hhs] : ");
	n1 = ft_printf("[%hhs]", "Bla bla bla ll lol%");
	n2 = printf("[%hhs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[js] : ");
	n1 = ft_printf("[%js]", "Bla bla bla ll lol%");
	n2 = printf("[%js]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjs] : ");
	n1 = ft_printf("[%jjjs]", "Bla bla bla ll lol%");
	n2 = printf("[%jjjs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[jjjs] : ");
	n1 = ft_printf("[%jjjjs]", "Bla bla bla ll lol%");
	n2 = printf("[%jjjjs]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+s] : ");
	n1 = ft_printf("[%+s]", "Bla bla bla ll lol%");
	n2 = printf("[%+s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#s] : ");
	n1 = ft_printf("[%#s]", "Bla bla bla ll lol%");
	n2 = printf("[%#s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[#s] : ");
	n1 = ft_printf("[%#s]", "Bla bla bla ll lol%");
	n2 = printf("[%#s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+#.10s] : ");
	n1 = ft_printf("[%+#.10s]", "Bla bla bla ll lol%");
	n2 = printf("[%+#.10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[++010s] : ");
	n1 = ft_printf("[%++010s]", "Bla bla bla ll lol%");
	n2 = printf("[%++010s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ 10s] : ");
	n1 = ft_printf("[% 10s]", "Bla bla bla ll lol%");
	n2 = printf("[% 10s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[s][s] : ");
	n1 = ft_printf("[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	n2 = printf("[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[s][s] : ");
	n1 = ft_printf("[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	n2 = printf("[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[s][s] : ");
	n1 = ft_printf("[%s][%s]", 0, "Bla bla bla ll lol%");
	n2 = printf("[%s][%s]", 0, "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10+8s] : ");
	n1 = ft_printf("[%.10+8s]", "hel\0lo");
	n2 = printf("[%.10+8s]", "hel\0lo");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.3.4.8s] : ");
	n1 = ft_printf("[%.3.4.8s]", "hel\0lo");
	n2 = printf("[%.3.4.8s]", "hel\0lo");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+7+8+9s] : ");
	n1 = ft_printf("[%+7+8+9s]", "hel\0lo");
	n2 = printf("[%+7+8+9s]", "hel\0lo");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0100s] : ");
	n1 = ft_printf("[%0100s]", "hel\0lo");
	n2 = printf("[%0100s]", "hel\0lo");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ks] : ");
	n1 = ft_printf("[%ks]", "hel\0lo");
	n2 = printf("[%ks]", "hel\0lo");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lls] : ");
	n1 = ft_printf("[%lls]", L"ϪѨਉൊḚ");
	n2 = printf("[%lls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[lhls] : ");
	n1 = ft_printf("[%lhls]", L"ϪѨਉൊḚ");
	n2 = printf("[%lhls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[hs] : ");
	n1 = ft_printf("[%hs]", "ok");
	n2 = printf("[%hs]", "ok");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[ +s] : ");
	n1 = ft_printf("[% +s]", "\0");
	n2 = printf("[% +s]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("+10.4s] : ");
	n1 = ft_printf("[%+10.4s]", "\t\t");
	n2 = printf("[%+10.4s]", "\t\t");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[# +s] : ");
	n1 = ft_printf("[%# +s]", "\0");
	n2 = printf("[%# +s]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("#+10.4s] : ");
	n1 = ft_printf("[%#+10.4s]", "\t\t");
	n2 = printf("[%#+10.4s]", "\t\t");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.713s] : ");
	n1 = ft_printf("[%.713s]", "hel\0lo");
	n2 = printf("[%.713s]", "hel\0lo");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hs] : ");
	n1 = ft_printf("[%010hs]", "\0");
	n2 = printf("[%010hs]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010hhs] : ");
	n1 = ft_printf("[%010hhs]", "\0");
	n2 = printf("[%010hhs]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010ls] : ");
	n1 = ft_printf("[%010ls]", L"ϪѨਉൊḚ");
	n2 = printf("[%010ls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010lls] : ");
	n1 = ft_printf("[%010lls]", L"ϪѨਉൊḚ");
	n2 = printf("[%010lls]", L"ϪѨਉൊḚ");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010js] : ");
	n1 = ft_printf("[%010js]", "\0");
	n2 = printf("[%010js]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010zs] : ");
	n1 = ft_printf("[%010zs]", "\0");
	n2 = printf("[%010zs]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "\0");
	n2 = printf("[%010s]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "coucou");
	n2 = printf("[%010s]", "coucou");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "\0");
	n2 = printf("[%010s]", "\0");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", "ok");
	n2 = printf("[%010s]", "ok");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[010s] : ");
	n1 = ft_printf("[%010s]", U"ok");
	n2 = printf("[%010s]", U"ok");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.0s] : ");
	n1 = ft_printf("[%.0s]", "Bla bla bla ll lol%");
	n2 = printf("[%.0s]", "Bla bla bla ll lol%");
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[0s] : ");
	n1 = ft_printf("[%0s]", 0);
	n2 = printf("[%0s]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.0s] : ");
	n1 = ft_printf("[%.0s]", 0);
	n2 = printf("[%.0s]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[.10s] : ");
	n1 = ft_printf("[%.10s]", 0);
	n2 = printf("[%.10s]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[10s] : ");
	n1 = ft_printf("[%10s]", 0);
	n2 = printf("[%10s]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_printf("[+0s] : ");
	n1 = ft_printf("[%+0s]", 0);
	n2 = printf("[%+0s]", 0);
	printf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
sleep(10);
	return (0);
}
