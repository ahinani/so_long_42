/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:31:12 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:50:28 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_right(t_data d, char **str, char *relative_path)
{
	d.i = get_pos_i(str, 'P');
	d.j = get_pos_j(str, 'P');
	d.count_c = ft_strtwochr1(str, 'C');
	if (str[d.j][d.i + 1] != '1' && (str[d.j][d.i + 1] != 'E'
			|| d.count_c == 0))
	{
		str[d.j][d.i] = '0';
		if (str[d.j][d.i + 1] == 'E' && d.count_c == 0)
		{
			mlx_clear_window(d.mlx, d.win);
			mlx_string_put(d.mlx, d.win, d.win_width / 4, d.win_height / 2,
				GREEN_PIXEL, "You Win , press any key to exit the game .");
			d.count_c = -1;
		}
		else
			str[d.j][d.i + 1] = 'P';
		put_img_to_window(d, str, relative_path);
	}
}

void	move_up(t_data d, char **str, char *relative_path)
{
	d.i = get_pos_i(str, 'P');
	d.j = get_pos_j(str, 'P');
	d.count_c = ft_strtwochr1(str, 'C');
	if (str[d.j - 1][d.i] != '1' && (str[d.j - 1][d.i] != 'E'
			|| d.count_c == 0))
	{
		str[d.j][d.i] = '0';
		if (str[d.j - 1][d.i] == 'E' && d.count_c == 0)
		{
			mlx_clear_window(d.mlx, d.win);
			mlx_string_put(d.mlx, d.win, d.win_width / 4, d.win_height / 2,
				GREEN_PIXEL, "You Win , press any key to exit the game .");
			d.count_c = -1;
		}
		else
			str[d.j - 1][d.i] = 'P';
		put_img_to_window(d, str, relative_path);
	}
}

void	move_down(t_data d, char **str, char *relative_path)
{
	d.i = get_pos_i(str, 'P');
	d.j = get_pos_j(str, 'P');
	d.count_c = ft_strtwochr1(str, 'C');
	if (str[d.j + 1][d.i] != '1' && (str[d.j + 1][d.i] != 'E'
			|| d.count_c == 0))
	{
		str[d.j][d.i] = '0';
		if (str[d.j + 1][d.i] == 'E' && d.count_c == 0)
		{
			mlx_clear_window(d.mlx, d.win);
			mlx_string_put(d.mlx, d.win, d.win_width / 4, d.win_height / 2,
				GREEN_PIXEL, "You Win , press any key to exit the game .");
			d.count_c = -1;
		}
		else
			str[d.j + 1][d.i] = 'P';
		put_img_to_window(d, str, relative_path);
	}
}

void	move_left(t_data d, char **str, char *relative_path)
{
	d.i = get_pos_i(str, 'P');
	d.j = get_pos_j(str, 'P');
	d.count_c = ft_strtwochr1(str, 'C');
	if (str[d.j][d.i - 1] != '1' && (str[d.j][d.i - 1] != 'E'
			|| d.count_c == 0))
	{
		str[d.j][d.i] = '0';
		if (str[d.j][d.i - 1] == 'E' && d.count_c == 0)
		{
			mlx_clear_window(d.mlx, d.win);
			mlx_string_put(d.mlx, d.win, d.win_width / 4, d.win_height / 2,
				GREEN_PIXEL, "You Win , press any key to exit the game .");
			d.count_c = -1;
		}
		else
			str[d.j][d.i - 1] = 'P';
		put_img_to_window(d, str, relative_path);
	}
}
