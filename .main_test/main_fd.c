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
	FILE 	*fd;

	setlocale (LC_ALL, "");

	fd = fopen("test2", "w+a+");

	ft_fprintf(fd, "[10s] : ");
	n1 = ft_fprintf(fd, "[%10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[10s] : ");
	n1 = ft_fprintf(fd, "[%10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+10s] : ");
	n1 = ft_fprintf(fd, "[%+10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[+10s] : ");
	n1 = ft_fprintf(fd, "[%+10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+010s] : ");
	n1 = ft_fprintf(fd, "[%+010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[+010s] : ");
	n1 = ft_fprintf(fd, "[%+010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[+0s] : ");
	n1 = ft_fprintf(fd, "[%+0s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+0s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[+0s] : ");
	n1 = ft_fprintf(fd, "[%+0s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+0s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.010s] : ");
	n1 = ft_fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.010s] : ");
	n1 = ft_fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+.10s] : ");
	n1 = ft_fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+.10s] : ");
	n1 = ft_fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.010s] : ");
	n1 = ft_fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.010s] : ");
	n1 = ft_fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+.010s] : ");
	n1 = ft_fprintf(fd, "[%+.010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+.010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+.010s] : ");
	n1 = ft_fprintf(fd, "[%+.010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+.010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.+10s] : ");
	n1 = ft_fprintf(fd, "[%.+10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.+10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.+10s] : ");
	n1 = ft_fprintf(fd, "[%.+10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.+10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+.10s] : ");
	n1 = ft_fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+.10s] : ");
	n1 = ft_fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[before d after] : ");
	n1 = ft_fprintf(fd, "[before %s after]", 0);
	n2 = fprintf(fd, "[before %s after]", 0);
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[before d after] : ");
	n1 = ft_fprintf(fd, "[before %s after]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[before %s after]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[a d b\\n] : ");
	n1 = ft_fprintf(fd, "[a %d b\n]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[a %d b\n]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[a d b\\n] : ");
	n1 = ft_fprintf(fd, "[a %d b\n]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[a %d b\n]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[#s] : ");
	n1 = ft_fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[#s] : ");
	n1 = ft_fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[ls] : ");
	n1 = ft_fprintf(fd, "[%ls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%ls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[ls] : ");
	n1 = ft_fprintf(fd, "[%ls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%ls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[lls] : ");
	n1 = ft_fprintf(fd, "[%lls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%lls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[lls] : ");
	n1 = ft_fprintf(fd, "[%lls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%lls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[llllls] : ");
	n1 = ft_fprintf(fd, "[%llllls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%llllls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[lllllls] : ");
	n1 = ft_fprintf(fd, "[%lllllls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%lllllls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[hs] : ");
	n1 = ft_fprintf(fd, "[%hs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%hs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[hs] : ");
	n1 = ft_fprintf(fd, "[%hs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%hs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);
	
	ft_fprintf(fd, "[hhhs] : ");
	n1 = ft_fprintf(fd, "[%hhs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%hhs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[hhhhs] : ");
	n1 = ft_fprintf(fd, "[%hhs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%hhs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[hhs] : ");
	n1 = ft_fprintf(fd, "[%hhs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%hhs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[js] : ");
	n1 = ft_fprintf(fd, "[%js]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%js]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[jjjs] : ");
	n1 = ft_fprintf(fd, "[%jjjs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%jjjs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[jjjs] : ");
	n1 = ft_fprintf(fd, "[%jjjjs]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%jjjjs]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+s] : ");
	n1 = ft_fprintf(fd, "[%+s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[#s] : ");
	n1 = ft_fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[#s] : ");
	n1 = ft_fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%#s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+#.10s] : ");
	n1 = ft_fprintf(fd, "[%+#.10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%+#.10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[++010s] : ");
	n1 = ft_fprintf(fd, "[%++010s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%++010s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[ 10s] : ");
	n1 = ft_fprintf(fd, "[% 10s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[% 10s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[s][s] : ");
	n1 = ft_fprintf(fd, "[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[s][s] : ");
	n1 = ft_fprintf(fd, "[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%s][%s]", "hel\0lo", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[s][s] : ");
	n1 = ft_fprintf(fd, "[%s][%s]", 0, "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%s][%s]", 0, "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10+8s] : ");
	n1 = ft_fprintf(fd, "[%.10+8s]", "hel\0lo");
	n2 = fprintf(fd, "[%.10+8s]", "hel\0lo");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.3.4.8s] : ");
	n1 = ft_fprintf(fd, "[%.3.4.8s]", "hel\0lo");
	n2 = fprintf(fd, "[%.3.4.8s]", "hel\0lo");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+7+8+9s] : ");
	n1 = ft_fprintf(fd, "[%+7+8+9s]", "hel\0lo");
	n2 = fprintf(fd, "[%+7+8+9s]", "hel\0lo");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[0100s] : ");
	n1 = ft_fprintf(fd, "[%0100s]", "hel\0lo");
	n2 = fprintf(fd, "[%0100s]", "hel\0lo");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[ks] : ");
	n1 = ft_fprintf(fd, "[%ks]", "hel\0lo");
	n2 = fprintf(fd, "[%ks]", "hel\0lo");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[lls] : ");
	n1 = ft_fprintf(fd, "[%lls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%lls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[lhls] : ");
	n1 = ft_fprintf(fd, "[%lhls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%lhls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[hs] : ");
	n1 = ft_fprintf(fd, "[%hs]", "ok");
	n2 = fprintf(fd, "[%hs]", "ok");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[ +s] : ");
	n1 = ft_fprintf(fd, "[% +s]", "\0");
	n2 = fprintf(fd, "[% +s]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "+10.4s] : ");
	n1 = ft_fprintf(fd, "[%+10.4s]", "\t\t");
	n2 = fprintf(fd, "[%+10.4s]", "\t\t");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[# +s] : ");
	n1 = ft_fprintf(fd, "[%# +s]", "\0");
	n2 = fprintf(fd, "[%# +s]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "#+10.4s] : ");
	n1 = ft_fprintf(fd, "[%#+10.4s]", "\t\t");
	n2 = fprintf(fd, "[%#+10.4s]", "\t\t");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.713s] : ");
	n1 = ft_fprintf(fd, "[%.713s]", "hel\0lo");
	n2 = fprintf(fd, "[%.713s]", "hel\0lo");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010hs] : ");
	n1 = ft_fprintf(fd, "[%010hs]", "\0");
	n2 = fprintf(fd, "[%010hs]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010hhs] : ");
	n1 = ft_fprintf(fd, "[%010hhs]", "\0");
	n2 = fprintf(fd, "[%010hhs]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010ls] : ");
	n1 = ft_fprintf(fd, "[%010ls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%010ls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010lls] : ");
	n1 = ft_fprintf(fd, "[%010lls]", L"ϪѨਉൊḚ");
	n2 = fprintf(fd, "[%010lls]", L"ϪѨਉൊḚ");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010js] : ");
	n1 = ft_fprintf(fd, "[%010js]", "\0");
	n2 = fprintf(fd, "[%010js]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010zs] : ");
	n1 = ft_fprintf(fd, "[%010zs]", "\0");
	n2 = fprintf(fd, "[%010zs]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "\0");
	n2 = fprintf(fd, "[%010s]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "coucou");
	n2 = fprintf(fd, "[%010s]", "coucou");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "\0");
	n2 = fprintf(fd, "[%010s]", "\0");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", "ok");
	n2 = fprintf(fd, "[%010s]", "ok");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[010s] : ");
	n1 = ft_fprintf(fd, "[%010s]", U"ok");
	n2 = fprintf(fd, "[%010s]", U"ok");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.0s] : ");
	n1 = ft_fprintf(fd, "[%.0s]", "Bla bla bla ll lol%");
	n2 = fprintf(fd, "[%.0s]", "Bla bla bla ll lol%");
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[0s] : ");
	n1 = ft_fprintf(fd, "[%0s]", 0);
	n2 = fprintf(fd, "[%0s]", 0);
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.0s] : ");
	n1 = ft_fprintf(fd, "[%.0s]", 0);
	n2 = fprintf(fd, "[%.0s]", 0);
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[.10s] : ");
	n1 = ft_fprintf(fd, "[%.10s]", 0);
	n2 = fprintf(fd, "[%.10s]", 0);
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[10s] : ");
	n1 = ft_fprintf(fd, "[%10s]", 0);
	n2 = fprintf(fd, "[%10s]", 0);
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	ft_fprintf(fd, "[+0s] : ");
	n1 = ft_fprintf(fd, "[%+0s]", 0);
	n2 = fprintf(fd, "[%+0s]", 0);
	fprintf(fd, "\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	return (0);
}
