/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usolak <usolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:33:32 by usolak            #+#    #+#             */
/*   Updated: 2026/02/01 13:28:35 by usolak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_print_char(int n);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_unsigned(unsigned int nb);
int	ft_print_hex(unsigned int nb, char small_x);

#endif