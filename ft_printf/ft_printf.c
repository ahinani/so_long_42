/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:47:46 by ahinani           #+#    #+#             */
/*   Updated: 2022/03/02 18:10:40 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../src/so_long.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_formats(va_list args, const char format)
{
	int	pr_len;

	pr_len = 0;
	if (format == 'x' || format == 'X')
		pr_len += ft_print_hexa(va_arg(args, unsigned int), format);
	else if (format == 'p')
		pr_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'c')
		pr_len += ft_putchar(va_arg(args, int));
	else if (format == '%')
		pr_len += ft_print_percent();
	else if (format == 's')
		pr_len += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		pr_len += ft_print_id(va_arg(args, int));
	else if (format == 'u')
		pr_len += ft_print_unsigned(va_arg(args, unsigned int));
	return (pr_len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		pr_len;

	i = 0;
	pr_len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			pr_len = pr_len + ft_formats(args, format[i + 1]);
			i++;
		}
		else
			pr_len = pr_len + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (pr_len);
}
