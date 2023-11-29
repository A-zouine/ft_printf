/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:22:39 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/26 17:58:58 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_m(unsigned int nb)
{
	int		re;
	char	*base;

	re = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		re += ft_puthex_m(nb / 16);
		re += ft_puthex_m(nb % 16);
	}
	else
		re += ft_putchar(base[nb % 16]);
	return (re);
}
