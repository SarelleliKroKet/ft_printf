/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:04:44 by usolak            #+#    #+#             */
/*   Updated: 2026/01/30 10:39:42 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char a)
{
	int		sum;
	int		i;
	char	*x;
	char	*y;
	char	format;

	sum = 0;
	i = 0;
	format = 'x';
	x = "0123456789abcdef";
	y = "0123456789ABCDEF";
	if (nb < 15)
	{
		if (format == 'x')
			sum += ft_print_char(x[i] % 16);
		else
			sum += ft_print_char(y[i] % 16);
	}
	else
	{
		(nb /= 16);
		sum += ft_print_char(x[i] % 16);
	}
	return (sum);
}
