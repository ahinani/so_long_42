/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:57:31 by ahinani           #+#    #+#             */
/*   Updated: 2021/12/10 16:49:55 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_number(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_len_number(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (0);
	nbr[len] = '\0';
	while (len--)
	{
		nbr[len] = 48 + (n % 10);
		n = n / 10;
	}
	return (nbr);
}

int	ft_print_unsigned(unsigned int n)
{
	int		pr_len;
	char	*nbr;

	pr_len = 0;
	if (n == 0)
		pr_len += write(1, "0", 1);
	else
	{
		nbr = ft_uitoa(n);
		pr_len += ft_print_str(nbr);
		free(nbr);
	}
	return (pr_len);
}
