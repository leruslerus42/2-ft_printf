/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:31:49 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/10/17 08:34:58 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
**	MAIN FUNCTION
**	It is the main function of the project.
**
**	It is used the concept of variadic functionds, in order to put and process the next value of the string we want to print as parameter, without knowing previously how 
**	many arguments will be taken from our ft_printf function.
**	
**	Going inside the function herself, we have two cases:
**	we could have a "%" sign, and in that case we would call the ft_check function to select the right print_type; otherwise we can print immediatly the charachter,
**	and read the next argument.
*/

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
