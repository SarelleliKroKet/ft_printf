/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:14:01 by usolak            #+#    #+#             */
/*   Updated: 2026/02/01 16:12:49 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	sum(const char *printable, ...)
{
	va_list	input;
	va_start (input, int);
	int		output;
	int		i;
	
	i = 0;
	output = va_arg(input, int);
	while (printable[i])
	{
		if (printable[i] == '%c')
			output += va_arg(input, int);
		else if (printable[i] == '%s')
			output += va_arg(input, int);
		else if (printable[i] == '%p')
			output += va_arg(input, int);
		else if (printable[i] == '%d')
			output += va_arg(input, int);
		else if (printable[i] == '%i')
			output += va_arg(input, int);
		else if (printable[i] == '%x')
			output += va_arg(input, int);
		else if (printable[i] == '%X')
			output += va_arg(input, int);
		else if (printable[i] == '%%')
			output += va_arg(input, int);
		i++;
	}
	return (output);
}

#include <stdio.h>

int	main()
{
	int val = sum("%cspdiuX%%", 'a', "yunus", "emre", 42, 69, 1234, 1234);
	printf("%d\n", val);
}
