/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 04:36:31 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/15 04:53:09 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}	

void	ft_putnbr(int nmb)
{
	if (nmb == -2147483648)
	{
		ft_putchar('_');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nmb < 0)
	{
		ft_putchar ('_');
		nmb = -nmb;
		ft_putnbr(nmb);
	}
	else if (nmb > 9)
	{
		ft_putnbr(nmb / 10);
		ft_putnbr(nmb % 10);
	}
	else
		ft_putchar(nmb + 48);
}
