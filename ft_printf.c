/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:14:01 by usolak            #+#    #+#             */
/*   Updated: 2026/02/02 22:54:30 by usolak           ###   ########.fr       */
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
}

int	ft_printf(const char *project, ...)
{
	int		i;
	va_list	printable;
	
	i = 0;
	va_start (printable, project);
	while (project)
	{
		if (project[i] == '%')
		{
			
		}
		
	}
}

#include <stdio.h>
int	main()
{
	int val = sum("%cspdiuX%%", 'a', "yunus", "emre", 42, 69, 1234, 1234);
	printf("%d\n", val);
}
