/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:43:26 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:48:34 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strtwochr1(char **str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == c)
				k++;
			if (str[i][j] != 'P' && str[i][j] != 'C'
				&& str[i][j] != 'E' && str[i][j] != '1'
					&& str[i][j] != '0')
				return (0);
			j++;
		}
		i++;
	}
	return (k);
}

int	check_map(char **str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (ft_strtwochr1(str, 'P') && ft_strtwochr(str, 'E')
		&& ft_strtwochr(str, 'C') && ft_strtwochr(str, '0'))
	{
		while (str[i])
		{
			if (str[i + 1])
			{
				j = ft_strlen(str[i]) - 1;
				k = ft_strlen(str[i + 1]) - 1;
			}
			if (str[i][0] != '1' || str[i][j] != '1' || j != k)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
