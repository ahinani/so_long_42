/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:43:03 by ahinani           #+#    #+#             */
/*   Updated: 2022/02/16 14:20:00 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_hexa_len(unsigned int number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}

static void	ft_app_hexa(unsigned int number, const char format)
{
	if (number >= 16)
	{
		ft_app_hexa(number / 16, format);
		ft_app_hexa(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_putchar(number + 48);
		else
		{
			if (format == 'x')
				ft_putchar(number - 10 + 'a');
			if (format == 'X')
				ft_putchar(number - 10 + 'A');
		}
	}
}

int	ft_print_hexa(unsigned int number, const char format)
{
	if (number == 0)
		return (ft_print_str("0"));
	else
		ft_app_hexa(number, format);
	return (ft_hexa_len(number));
}
