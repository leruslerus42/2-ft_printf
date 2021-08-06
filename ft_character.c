/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:19:30 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/08/06 17:20:28 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_character(va_list args)
{
	ft_putchar(va_arg(args, int), 1);
	return (1);
}

/*
int main()
{
    //printf("%c%c%c%c", '\064', '\062', '\053', '\053');
    ft_printf("%c%c%c%c", '\064', '\062', '\053', '\053');
    return (0);
}
*/
