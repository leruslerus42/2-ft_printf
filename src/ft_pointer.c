/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:20:17 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/10/17 08:25:12 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
**	Function that prints the void * pointer argument in hexadecimal.
**	For the implementation is used the same structure of the hexadimal function (ft_hexa).
*/

static void	hexa_alphabet(long int n)
{
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

static int	ft_convert(unsigned long int p, int *ptr)
{
	int	i;
	int	ptr_len;

	i = 0;
	while (p > 0)
	{
		ptr[i] = (p % 16);
		p /= 16;
		i++;
	}
	ptr_len = i + 2;
	while (--i >= 0)
		hexa_alphabet(ptr[i]);
	free(ptr);
	return (ptr_len);
}

int	ft_pointer(va_list args)
{
	unsigned long	p;
	unsigned long	tmp;
	int				i;
	int				*ptr;

	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	i = 0;
	p = va_arg(args, unsigned long);
	tmp = p;
	if (!p)
	{
		ft_putchar_fd(48, 1);
		return (3);
	}
	while (tmp)
	{
		i++;
		tmp /= 16;
	}
	ptr = (int *) malloc (i * sizeof(int));
	if (ptr == 0)
		return (0);
	return (ft_convert(p, ptr));
}

/*
int main()
{
    printf("%x %x %x\012",  160000, 5550, 0);
    ft_printf("%x %x %x", 160000, 5550, 0);

    return (0);
}*/
