/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_windows_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:38:10 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:49:00 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_windows_bonus(t_data data)
{
	int	i;

	i = 0;
	if (check_map(data.str) == 0)
	{
		ft_printf("%s%s", RED, "Invalid Map !.\n");
		exit(0);
	}
	data.win_width = count_width(data.buff) * 42;
	data.win_height = count_height(data.buff) * 42;
	free(data.buff);
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, data.win_width,
			data.win_height, "so_long_bonus");
	put_img_to_window(data, data.str, "img/right.xpm");
	mlx_hook(data.win, 2, 1L << 0, &move_position, &data);
	mlx_hook(data.win, 17, 1L << 0, &ft_exit, &data);
	data.i = -1;
	mlx_loop_hook(data.mlx, &ft_enemy, &data);
	mlx_loop(data.mlx);
}
