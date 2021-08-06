/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:21:17 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/06 17:20:55 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

static int	integer_len(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_putunsnbr_fd(unsigned int n, int fd, int button)
{
	unsigned int	n2;

	n2 = 0;
	if (button == 0)
	{
		n2 = n;
		button = 1;
	}
	if (n >= 10)
	{
		ft_putunsnbr_fd(n / 10, fd, 1);
	}
	ft_putchar((n % 10) + '0', fd);
	if (n == n2)
		return (integer_len(n));
	return (0);
}

int	ft_unsigned(va_list args)
{
	return (ft_putunsnbr_fd(va_arg(args, unsigned int), 1, 0));
}

/*
int main()
{
    printf("%u %u\012", 432624, 45636);
    ft_printf("%u %u", 432624, 45636);

    return (0);
}
*/