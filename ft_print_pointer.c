/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:55:27 by usolak            #+#    #+#             */
/*   Updated: 2026/02/01 15:42:50 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned int nb, char a)
{
	int		sum;

	sum = 0;
	if (!nb)
		return (ft_print_str("(nil)"));
	sum += ft_print_str("0x");
	sum += ft_print_hex((nb % 16), 'x');
	return (sum);
}

#include <stdio.h>

int main()
{
	int nb = 63523;

	void *ptr = &nb;
	printf("%p\n", ptr);
	ft_print_pointer(nb, 'x');
}