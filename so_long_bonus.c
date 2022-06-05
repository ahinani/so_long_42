/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:44:58 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:52:37 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*str;
	t_data	data;

	fd = open(av[1], O_RDONLY);
	str = ft_strchr(av[1], '.');
	if (fd < 0)
	{
		ft_printf("%s%s", RED, "Your map should end with '.ber'\n");
		return (0);
	}
	if (ac != 2 || ft_strcmp(str, ".ber") != 0)
	{
		ft_printf("%s%s", RED, "Usage : ./so_long <map.ber> \n");
		return (0);
	}
	data.buff = get_next_line(fd);
	if (!data.buff)
	{
		ft_printf("%s%s", RED, "Invalid Map\n");
		return (0);
	}
	data.count_c = count_c(data.buff);
	data.str = ft_split(data.buff, '\n');
	create_windows_bonus(data);
}
