/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:18:57 by usolak            #+#    #+#             */
/*   Updated: 2026/02/07 14:09:58 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		sum;

	sum = 0;
	if (nb > 9)
	{
		sum += ft_print_unsigned(nb / 10);
		sum += ft_print_unsigned(nb % 10);
	}
	else
	{
		sum += ft_print_char(nb + 48);
	}
	return (sum);
}
