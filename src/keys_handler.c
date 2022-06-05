/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:43:17 by ahinani           #+#    #+#             */
/*   Updated: 2022/03/23 17:20:41 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_position(int keycode, t_data *data)
{
	if (ft_strtwochr(data->str, 'P'))
	{
		if (keycode == UP)
			move_up(*data, data->str, "img/up.xpm");
		if (keycode == RIGHT)
			move_right(*data, data->str, "img/right.xpm");
		if (keycode == DOWN)
			move_down(*data, data->str, "img/down.xpm");
		if (keycode == LEFT)
			move_left(*data, data->str, "img/left.xpm");
	}
	else
	{
		mlx_destroy_window(data->mlx, data->win);
		exit(0);
	}
	if (keycode == 53)
	{
		mlx_destroy_window(data->mlx, data->win);
		exit(0);
	}
	return (0);
}

int	ft_exit(int keycode, t_data *data)
{
	(void) keycode;
	(void) data;
	ft_printf("Exiting The Game ......\n");
	exit (0);
}

void	you_lose(t_data *d, int pi, int pj)
{
	mlx_clear_window(d->mlx, d->win);
	mlx_string_put(d->mlx, d->win, d->win_width / 4, d->win_height / 2,
		RED_PIXEL, "You Lose , press any key to exit the game.");
	d->str[pi][pj] = '0';
}
