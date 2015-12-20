/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/19 19:43:20 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <limits.h>
#include <fcntl.h>
#include <stdlib.h>

int     main(void)
{
	int     n1;
	int     n2;
	char	c;
	FILE 	*fd;

	c = 0;
	setlocale (LC_ALL, "");
	fd = fopen("test2", "w+a+");


	n1 = ft_fprintf(fd, "[%-2c]", 'a');
	n2 = fprintf(fd, "[%-2c]", 'x');
	//qqprintf("\n%d %d LINE : %d\n______________________________________________________________________\n", n1, n2, __LINE__);

	fclose(fd);
	return (0);
}
