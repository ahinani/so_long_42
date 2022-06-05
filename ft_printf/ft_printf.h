/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahinani <ahinani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:33:00 by ahinani           #+#    #+#             */
/*   Updated: 2022/02/23 15:35:50 by ahinani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../src/so_long.h"
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_hexa(unsigned int number, const char format);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_percent(void);
int	ft_print_str(char *str);
int	ft_print_id(int n);
int	ft_print_unsigned(unsigned int n);
#endif