/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img_to_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:08:08 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:54:21 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_img(char str, t_data d, char *relative_path)
{
	if (str == '1')
	{
		d.img = mlx_xpm_file_to_image(d.mlx, "img/brick.xpm", &d.w, &d.h);
		mlx_put_image_to_window(d.mlx, d.win, d.img, d.i * 42, d.j * 42);
	}
	if (str == 'P')
	{
		d.img = mlx_xpm_file_to_image(d.mlx, relative_path, &d.w, &d.h);
		mlx_put_image_to_window(d.mlx, d.win, d.img, d.i * 42, d.j * 42);
	}
	if (str == 'C')
	{
		d.img = mlx_xpm_file_to_image(d.mlx, "img/food.xpm", &d.w, &d.h);
		mlx_put_image_to_window(d.mlx, d.win, d.img, d.i * 42, d.j * 42);
	}
	if (str == 'E')
	{
		d.img = mlx_xpm_file_to_image(d.mlx, "img/exit.xpm", &d.w, &d.h);
		mlx_put_image_to_window(d.mlx, d.win, d.img, d.i * 42, d.j * 42);
	}
	if (str == '0')
	{
		d.img = mlx_xpm_file_to_image(d.mlx, "img/bc.xpm", &d.w, &d.h);
		mlx_put_image_to_window(d.mlx, d.win, d.img, d.i * 42, d.j * 42);
	}
}

void	put_img_to_window(t_data data, char **str, char *relative_path)
{
	static int	i;

	data.j = 0;
	while (str[data.j])
	{
		data.i = 0;
		while (str[data.j][data.i])
		{
			put_img(str[data.j][data.i], data, relative_path);
			data.i++;
		}
		data.j++;
	}
	ft_count_move(i++, data);
}
