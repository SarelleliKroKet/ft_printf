/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:14:01 by usolak            #+#    #+#             */
/*   Updated: 2026/02/07 16:49:29 by usolak           ###   ########.fr       */
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
	else
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
	if (!project)
		return (-1);
	while (project[i])
	{
		if (project[i] == '%')
		{
			if (project[i + 1] == '\0')
				return (-1);
			sum += (print_parameters(project[i + 1], printable));
			i++;
		}
		else
			sum += write(1, &project[i], 1);
		i++;
	}
	va_end(printable);
	return (sum);
}
