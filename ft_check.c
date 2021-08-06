/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 10:45:22 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/06 15:36:41 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(const char *str, va_list args)
{
	if ((*str == 'd') || (*str == 'i'))
		return (ft_integer(args));
	else if (*str == 'c')
		return (ft_character(args));
	else if (*str == 's')
		return (ft_string(args));
	else if (*str == '%')
		return (ft_percent());
	else if (*str == 'p')
		return (ft_pointer(args));
	else if (*str == 'u')
		return (ft_unsigned(args));
	else if (*str == 'x')
		return (ft_hexa(args, 'h'));
	else if (*str == 'X')
		return (ft_hexa(args, 'H'));
	return (0);
}
