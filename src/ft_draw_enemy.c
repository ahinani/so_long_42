/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:03:01 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:49:40 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_draw_enemy(t_data *d)
{
	static int	i;
	static int	pi;
	static int	pj;

	if (pi == 0)
	{
		pi = get_pos_j(d->str, '0');
		pj = get_pos_i(d->str, '0');
	}
	if (d->str[pi][pj] == '0' && ft_strtwochr(d->str, 'P'))
	{
		ft_put_enemy(i, pj, pi, d);
		if (i == 700)
		{
			i = 0;
			pj++;
		}
	}
	else if (d->str[pi][pj] == 'P')
		you_lose(d, pi, pj);
	else
		pi = 0;
	i++;
}
