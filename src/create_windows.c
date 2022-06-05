/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_windows.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:31:32 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:49:30 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_windows(t_data data)
{
	int	i;

	i = 0;
	if (check_map(data.str) == 0)
	{
		ft_printf("%s%s", RED, "Invalid Map!");
		exit(0);
	}
	data.win_width = count_width(data.buff) * 42;
	data.win_height = count_height(data.buff) * 42;
	free(data.buff);
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, data.win_width,
			data.win_height, "so_long");
	put_img_to_window(data, data.str, "img/right.xpm");
	mlx_hook(data.win, 2, 1L << 0, &move_position, &data);
	mlx_hook(data.win, 17, 1L << 0, &ft_exit, &data);
	mlx_loop(data.mlx);
}
