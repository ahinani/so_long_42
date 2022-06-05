/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:26:26 by ahinani           #+#    #+#             */
/*   Updated: 2022/02/24 17:24:35 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_id(int n)
{
	char	*nb;
	int		size;

	nb = ft_itoa(n);
	size = ft_print_str(nb);
	free(nb);
	return (size);
}
