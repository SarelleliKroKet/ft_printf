/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:55:27 by usolak            #+#    #+#             */
/*   Updated: 2026/02/01 14:33:14 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *pointer, char a)
{
	int		sum;
	int		i;
	char	*arr;

	arr = "0123456789abcdef";
	i = 0;
	sum = 0;
	if (!pointer)
		return (ft_print_str("(nil)"));
	sum += ft_print_str("0x");
	if (a == 'x')
	{
		sum += ft_print_hex(arr[i % 16], 'x');
		i++;
	}
	return (sum);
}

#include <stdio.h>

int main()
{
	char *s = "pwbfjbdoslfs";
	printf("%d\n", ft_print_pointer(s, 'x'));
}