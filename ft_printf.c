/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:31:49 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/06 17:20:49 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (!format)
		return (0);
	va_start (args, format);
	while (*format)
	{
		if (*format == '%')
		{
			i += ft_check((&(*(++format))), args);
			format++;
			continue ;
		}
		ft_putchar(*format, 1);
		format++;
	}
	va_end(args);
	return (0);
}
