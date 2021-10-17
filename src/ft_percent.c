/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 23:21:06 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/10/17 08:23:39 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
**	Function that prints a percent sign.
*/

int	ft_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
