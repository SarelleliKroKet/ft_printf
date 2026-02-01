/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:14:01 by usolak            #+#    #+#             */
/*   Updated: 2026/02/01 10:47:53 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
static int sum(const char *s, ...)
{
	va_list akosaca;
	va_start(akosaca, s);
	int		i;
	i = 0;
	int yaycicek;
	yaycicek = va_arg(akosaca, int);
	while (s[i])
	{
		if (s[i] == '+')
			yaycicek += va_arg(akosaca, int);
		else if (s[i] == '*')
			yaycicek *= va_arg(akosaca, int);
		else if (s[i] == '-')
			yaycicek -= va_arg(akosaca, int);
		else if (s[i] == '/')
			yaycicek /= va_arg(akosaca, int);
		else if (s[i] == '%')
			yaycicek %= va_arg(akosaca, int);
		i++;
	}
	va_end(akosaca);
	return (yaycicek);
}
#include <stdio.h>

int main()
{
	int val = sum("+*-/%%", 5, 5, 10, 5, 5, 15);
	printf("%d\n", val);
}
