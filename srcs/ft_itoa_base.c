/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 23:15:59 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/11 23:16:03 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_intlen_base(long long n, int base)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(long long n, int base, int print_v)
{
	char	*str;
	size_t	i;
	int		sign;

	if (base < 2 || base > 16)
		return (0);
	i = ft_intlen_base(n, base);
	sign = (n < 0) ? -1 : 1;
	if (n == 0)
		return ("0");
	if ((str = (char *)malloc(i * sizeof(char) + 1)) == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[i] = '\0';
	while (n != 0)
	{
		if (n % base >= 10)
			str[i - 1] = (n % base * sign) + print_v + 39;
		else
			str[i - 1] = (n % base * sign) + '0';
		n /= base;
		i--;
	}
	return (str);
}
