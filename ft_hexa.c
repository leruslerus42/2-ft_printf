/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:21:19 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/07 16:03:15 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	HEXX_ALPHABET(unsigned int n)
{
	if (n >= 0 && n <= 9)
		(ft_putchar_fd(n + '0', 1));
	else if (n == 10)
		(ft_putchar_fd('A', 1));
	  else if (n == 11)
		(ft_putchar_fd('B', 1));
	  else if (n == 12)
		(ft_putchar_fd('C', 1));
	  else if (n == 13)
		(ft_putchar_fd('D', 1));
	  else if (n == 14)
		(ft_putchar_fd('E', 1));
	  else if (n == 15)
		(ft_putchar_fd('F', 1));
}

static void	hexa_alphabet(unsigned int n, char h)
{
	if (h == 'H')
		return (HEXX_ALPHABET(n));
	if (n >= 0 && n <= 9)
		(ft_putchar_fd(n + '0', 1));
	else if (n == 10)
		(ft_putchar_fd('a', 1));
	else if (n == 11)
		(ft_putchar_fd('b', 1));
	else if (n == 12)
		(ft_putchar_fd('c', 1));
	else if (n == 13)
		(ft_putchar_fd('d', 1));
	else if (n == 14)
		(ft_putchar_fd('e', 1));
	else if (n == 15)
		(ft_putchar_fd('f', 1));
}

static int	ft_convert(unsigned int n, char h, int *hexa)
{
	int	hexa_len;
	int	i;

	i = 0;
	while (n)
	{
		hexa[i] = (n % 16);
		n /= 16;
		i++;
	}
	hexa_len = i;
	while (--i >= 0)
		hexa_alphabet(hexa[i], h);
	free (hexa);
	return (hexa_len);
}

int	ft_hexa(va_list args, char h)
{
	unsigned int	n;
	unsigned int	tmp;
	int				i;
	int				*hexa;

	i = 0;
	n = va_arg(args, unsigned int);
	tmp = n;
	if (!n)
	{
		ft_putchar_fd(48, 1);
		return (1);
	}
	while (tmp)
	{
		i++;
		tmp /= 16;
	}
	hexa = (int *) malloc (i * sizeof(int));
	if (hexa == 0)
		return (0);
	return (ft_convert(n, h, hexa));
}

/*
int main()
{
	printf("%x %x %x\012", 160000, 5550, 80);
	ft_printf("%x %x %x", 160000, 5550, 80);

	return (0);
}
*/
