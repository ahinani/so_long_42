/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:49:17 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:50:08 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	size_t		i;
	size_t		j;
	char		k;

	i = 0;
	j = ft_strlen(str);
	k = (char)c;
	if (str)
	{
		while (i <= j)
		{
			if (str[i] == k)
				return ((char *)&str[i]);
			i++;
		}
	}
	return (0);
}
