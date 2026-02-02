/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:14:01 by usolak            #+#    #+#             */
/*   Updated: 2026/02/02 21:24:11 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	case_control(char *a)
{
	char *a = "cspdiuxX%%";
}

static int	print_parameters(char *a, va_list)
{
	if (a[0] == 'c')
		return (ft_print_char(va_arg(printable, int n)));
	else if (a[1] == 's')
		return (ft_print_str(va_arg(printable, char *str)));
	else if (a[2] == 'p')
		return (ft_print_pointer(va_arg(printable, (void *pointer, char a))));
	else if (a[3] == 'd' && a[4] == 'i')
		return (ft_print_int(va_arg(printable, int n)));
	else if (a[5] == 'u')
		return (ft_print_unsigned(va_arg(printable, unsigned int nb)));
	else if (a[6] == 'x' && a[7] == 'X')
		return (ft_print_hex(va_arg(printable, (unsigned int nb, char small_x))));
	else if (a[8] == '%')
		return (ft_print_char('%'));
}

int	ft_printf(const char *, ...)
{
	va_list	printable;

}

#include <stdio.h>

int	main()
{
	int val = sum("%cspdiuX%%", 'a', "yunus", "emre", 42, 69, 1234, 1234);
	printf("%d\n", val);
}
