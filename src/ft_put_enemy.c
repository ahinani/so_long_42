/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_enemy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:28:28 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:48:17 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_enemy(int i, int x, int y, t_data *d)
{
	if (i == 200)
	{
		d->img = mlx_xpm_file_to_image(d->mlx, "./img/e.xpm", &d->w, &d->h);
		mlx_put_image_to_window(d->mlx, d->win, d->img, x * 42, y * 42);
	}
	if (i == 400)
	{
		d->img = mlx_xpm_file_to_image(d->mlx, "./img/bc.xpm", &d->w, &d->h);
		mlx_put_image_to_window(d->mlx, d->win, d->img, x * 42, y * 42);
		d->img = mlx_xpm_file_to_image(d->mlx, "./img/e1.xpm", &d->w, &d->h);
		mlx_put_image_to_window(d->mlx, d->win, d->img, x * 42, y * 42);
	}
	if (i == 600)
	{
		d->img = mlx_xpm_file_to_image(d->mlx, "./img/bc.xpm", &d->w, &d->h);
		mlx_put_image_to_window(d->mlx, d->win, d->img, x * 42, y * 42);
		d->img = mlx_xpm_file_to_image(d->mlx, "./img/e2.xpm", &d->w, &d->h);
		mlx_put_image_to_window(d->mlx, d->win, d->img, x * 42, y * 42);
	}
	if (i == 700)
	{
		d->img = mlx_xpm_file_to_image(d->mlx, "./img/bc.xpm", &d->w, &d->h);
		mlx_put_image_to_window(d->mlx, d->win, d->img, x * 42, y * 42);
	}
}

int	ft_enemy(t_data *data)
{
	static int	i;

	if (ft_strtwochr(data->str, '0') == 0)
		i = 10;
	if (i == 0)
		ft_draw_enemy(data);
	usleep(120);
	return (0);
}
