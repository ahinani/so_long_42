/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:31:49 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/06 22:32:21 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define WHITE_PIXEL 0xFFFFFF
# define RED_PIXEL 0xFF0000
# define GREEN_PIXEL 0xFF00
# define BLUE_PIXEL 0x0000ff
# define GOLD_PIXEL 0xffd700
# define AQUA_PIXEL 0x00ffff
# define GREY_PIXEL 0x7a7a7a
# define BUFFER_SIZE 1
# define YELLOW "\e[0;33m"
# define GREEN "\e[0;32m"
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define UP 13
# define DOWN 1
# define RIGHT 2
# define LEFT 0

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <mlx.h>
# include <fcntl.h>
# include "../ft_printf/ft_printf.h"

typedef struct s_data
{
	void			*mlx;
	void			*win;
	char			*buff;
	void			*img;
	char			**str;
	unsigned int	c;
	char			*relative_path;
	int				win_width;
	int				win_height;
	int				w;
	int				h;
	int				i;
	int				j;
	int				count_c;
}	t_data;

int		check_map(char **str);
int		count_width(char *str);
int		count_height(char *str);
int		count_c(char *str);
char	*get_next_line(int fd);
void	create_windows(t_data data);
char	*ft_itoa(int n);
int		ft_strtwochr1(char **str, char c);
char	**ft_split(char const *s, char c);
int		ft_strtwochr(char **str, char c);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
void	ft_count_move(int j, t_data data);
int		get_pos_i(char **str, char c);
int		get_pos_j(char **str, char c);
size_t	ft_strlen(const char	*str);
char	*get_line(char *str);
char	*get_rest(char *str);
void	put_img(char str, t_data d, char *relative_path);
void	put_img_to_window(t_data data, char **str, char *relative_path);
int		ft_strcmp(char *s1, char *s2);
void	move_up(t_data d, char **str, char *relative_path);
void	move_right(t_data d, char **str, char *relative_path);
void	move_down(t_data d, char **str, char *relative_path);
void	move_left(t_data d, char **str, char *relative_path);
int		move_position(int keycode, t_data *data);
int		ft_exit(int keycode, t_data *data);
void	you_lose(t_data *d, int pi, int pj);
void	ft_put_enemy(int i, int x, int y, t_data *d);
void	ft_draw_enemy(t_data *d);
int		ft_enemy(t_data *data);
void	create_windows_bonus(t_data data);
#endif
