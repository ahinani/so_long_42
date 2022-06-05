/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:55:03 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:50:14 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	s1i;
	unsigned char	s2i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		s1i = s1[i];
		s2i = s2[i];
		if (s1i != s2i)
			return (s1i - s2i);
		i++;
	}
	free(s1);
	return (0);
}

char	*ft_strjoin1(char *buff, char *str)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	k = 0;
	j = 0;
	i = ft_strlen(buff) + ft_strlen(str);
	temp = malloc (i + 1);
	while (buff[j])
	{
		temp[k] = buff[j];
		k++;
		j++;
	}
	j = 0;
	while (str[j])
	{
		temp[k] = str[j];
		k++;
		j++;
	}
	temp [k] = '\0';
	free(buff);
	return (temp);
}

char	*get_next_line(int fd)
{
	char	*buff;
	char	*rest;
	int		i;

	i = 9;
	buff = malloc(2);
	rest = malloc(1);
	rest[0] = '\0';
	while (i != 0)
	{
		i = read(fd, buff, 1);
		if (i == -1 || buff == NULL)
		{
			free(buff);
			free(rest);
			return (NULL);
		}
		buff[i] = '\0';
		rest = ft_strjoin1(rest, buff);
	}
	free(buff);
	if (ft_strncmp(rest, "", 2) == 0)
		return (NULL);
	return (rest);
}
