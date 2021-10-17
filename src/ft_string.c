/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:20:06 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/10/17 08:35:44 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
**	Function that print a string of charachters.
*/

static int	ft_putstr_with_null_string_case_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (ft_putstr_with_null_string_case_fd("(null)", 1));
	while (*s)
	{
		ft_putchar_fd(*s++, fd);
		count++;
	}
	return (count);
}

int	ft_string(va_list	arg)
{
	return (ft_putstr_with_null_string_case_fd(va_arg(arg, char *), 1));
}

/*
int main()
{
	printf("%s\040%s\040%s\040awesome\012", "42", "Heilbronn", "is");
	ft_printf("%s\040%s\040%s\040awesome", "42", "Heilbronn", "is");


	return (0);
}
*/
