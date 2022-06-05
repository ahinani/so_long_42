/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:32:19 by ahinani           #+#    #+#             */
/*   Updated: 2022/04/08 20:49:56 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	int		m;
	char	*buffer;

	m = 0;
	k = 0;
	if (s1 != NULL || s2 != NULL)
	{
		j = ft_strlen(s1);
		i = ft_strlen(s2);
		buffer = malloc(sizeof(char) * i + j + 1);
		if (buffer == NULL)
			return (NULL);
		while (s1[k])
			buffer[m++] = s1[k++];
		k = 0;
		while (s2[k])
			buffer[m++] = s2[k++];
		buffer[m] = '\0';
		free(s2);
		return (buffer);
	}
	return (NULL);
}
