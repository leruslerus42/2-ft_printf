/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:31:49 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/07 16:11:14 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
		ft_putchar_fd(*format, 1);
		format++;
		i++;
	}
	va_end(args);
	return (i);
}

/*
int main()
{
	//ft_printf("%c\012", '0');
	//printf("%c", '0');
	printf(" %c %c %c \012", '2', '1', 0);
	ft_printf(" %c %c %c ", '2', '1', 0);
	return (0);
}
*/
