/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/10 06:19:55 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>

int     main(void)
{
	int     test;
	int     n1;
	int     n2;
	char    *c;

	setlocale (LC_ALL, "");

	test = 10;
	n1 = ft_printf("%0+lld coucou\n", 10000000000000);
	n2 = printf("%0c", 'T');


	printf("\n%d %d\n", n1, n2);
	return (0);
}
