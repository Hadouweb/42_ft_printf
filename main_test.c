/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:49:13 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/13 06:50:43 by nle-bret         ###   ########.fr       */
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

	n1 = ft_printf("[a %u b %u c %u d]", 0, 55555, 100000);
	n2 = printf("[a %u b %u c %u d]", 0, 55555, 100000);
	printf(" | RETURN : %d %d\n", n1, n2);
	
	n1 = ft_printf("% Zoooo");
	n2 = printf("% Zoooo");
	printf(" | RETURN : %d %d\n", n1, n2);

	n1 = ft_printf("%-Zoooo");
	n2 = printf("%-Zoooo");
	printf(" | RETURN : %d %d\n", n1, n2);

	n1 = ft_printf("[%kaaad]");
	n2 = printf("[%kaaad]");
	printf(" | RETURN : %d %d\n", n1, n2);

	return (0);
}
