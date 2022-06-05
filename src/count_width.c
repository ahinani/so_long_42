/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:15:04 by ahinani           #+#    #+#             */
/*   Updated: 2022/03/11 12:53:50 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_width(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\n')
		i++;
	return (i);
}