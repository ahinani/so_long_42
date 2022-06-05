/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:02:31 by ahinani           #+#    #+#             */
/*   Updated: 2021/12/09 15:18:37 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_len_ptr(unsigned long long number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}

static void	ft_ptr(unsigned long long number)
{
	if (number >= 16)
	{
		ft_ptr((number / 16));
		ft_ptr((number % 16));
	}
	else
	{
		if (number <= 9)
			ft_putchar((number + '0'));
		else
			ft_putchar((number - 10 + 'a'));
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	pr_len;

	pr_len = 0;
	pr_len = pr_len + write(1, "0x", 2);
	if (ptr == 0)
		pr_len = pr_len + write(1, "0", 1);
	else
	{
		ft_ptr(ptr);
		pr_len = pr_len + ft_len_ptr(ptr);
	}	
	return (pr_len);
}
