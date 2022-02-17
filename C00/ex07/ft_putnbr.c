/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 04:36:31 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/17 11:46:19 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char ax)
{
	write(1, &ax, 1);
}	

void	ft_putnbr(int nmb)
{
	if (nmb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nmb < 0)
	{
		ft_putchar ('-');
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
