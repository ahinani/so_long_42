/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:55:24 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/02 19:13:24 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_count_move(int j, t_data data)
{
	char	*str;
	int		i;

	i = 0;
	while (i < 8)
	{
		data.img = mlx_xpm_file_to_image(data.mlx, "./img/brick.xpm",
				&data.w, &data.h);
		mlx_put_image_to_window(data.mlx, data.win, data.img, i * 42, 0);
		i++;
	}
	str = ft_strjoin("Movement Count -> ", ft_itoa(j));
	mlx_string_put(data.mlx, data.win, 10, 10, GOLD_PIXEL, str);
	free(str);
}
