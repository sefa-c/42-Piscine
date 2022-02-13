/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:01:12 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/13 18:34:36 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}	

void	ft_print_numbers(void)
{
	char	sayilar;

	sayilar = '0';
	while (sayilar <= '9' )
	{
		ft_putchar(sayilar);
		sayilar++;
	}	
}
