/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:18:58 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/07 13:53:33 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_character(va_list args);
int	ft_hexa(va_list args, char c);
int	ft_integer(va_list args);
int	ft_percent(void);
int	ft_pointer(va_list args);
int	ft_printf(const char *format, ...);
int	ft_string(va_list args);
int	ft_unsigned(va_list args);
int	ft_check(const char *str, va_list args);

#endif