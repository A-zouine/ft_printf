/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:56:38 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/25 10:26:23 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long nb)
{
	int			re;
	char		*base;

	re = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		re += ft_putadress(nb / 16);
		re += ft_putadress(nb % 16);
	}
	else
		re += ft_putchar(base[nb % 16]);
	return (re);
}
