/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:14:01 by usolak            #+#    #+#             */
/*   Updated: 2026/02/03 16:49:20 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_parameters(char a, va_list printable)
{
	if (a == 'c')
		return (ft_print_char(va_arg(printable, int)));
	else if (a == 's')
		return (ft_print_str(va_arg(printable, char *)));
	else if (a == 'p')
		return (ft_print_pointer(va_arg(printable, unsigned long)));
	else if (a == 'd' || a == 'i')
		return (ft_print_int(va_arg(printable, int)));
	else if (a == 'u')
		return (ft_print_unsigned(va_arg(printable, unsigned int)));
	else if (a == 'x')
		return (ft_print_hex(va_arg(printable, unsigned int), 'x'));
	else if (a == 'X')
		return (ft_print_hex(va_arg(printable, unsigned int), 'X'));
	else if (a == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *project, ...)
{
	int		i;
	int		sum;
	va_list	printable;
	
	i = 0;
	sum = 0;
	va_start (printable, project);
	while (project[i])
	{
		if (project[i] == '%' && project[i + 1])
			sum += (print_parameters(project[i + 1], printable));
		else
			sum += write(1, project, 1);
		i++;
	}
	va_end(printable);
	return (sum);
}

#include <stdio.h>
int	main()
{
	int val = 42;
	ft_printf("%c %s %p %d %i %u %x %X %%", 'c', "umut", &val, 42, 58, 1000, 15000, 19000);
	printf("\n");
	printf("%c %s %p %d %i %u %x %X %%", 'c', "umut", &val, 42, 58, 1000, 15000, 19000);
}
