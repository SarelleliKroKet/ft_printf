/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:59:26 by usolak            #+#    #+#             */
/*   Updated: 2026/01/26 14:56:51 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int	sum;
	
	sum = 0;
	if (n == -2147483648)
	{
		return (ft_print_str("-2147483648"));
	}
	if (n < 0)
	{
		sum += ft_print_char('-');
		n = -n;
	}
	if (n > 9)
	{
		sum += ft_print_int(n / 10);
		sum += ft_print_int(n % 10);
	}
	else
	{
		sum += ft_print_char(n + 48);
	}
	return (sum);
}
