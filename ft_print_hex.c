/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:04:44 by usolak            #+#    #+#             */
/*   Updated: 2026/02/01 11:15:45 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char small_x)
{
	int				sum;
	char			*smaller;
	char			*bigger;

	sum = 0;
	smaller = "0123456789abcdef";
	bigger = "0123456789ABCDEF";
	if (nb <= 15)
	{
		if (small_x == 48)
			sum += ft_print_char(smaller[nb]);
		else
			sum += ft_print_char(bigger[nb]);
	}
	else
	{
		sum += ft_print_hex(nb / 16, small_x);
		if (small_x == 48)
			sum += ft_print_char(smaller[nb % 16]);
		else
			sum += ft_print_char(bigger[nb % 16]);
	}
	return (sum);
}

#include <stdio.h>
int main()
{
	printf("%x\n", ft_print_hex(1523, 49));
}