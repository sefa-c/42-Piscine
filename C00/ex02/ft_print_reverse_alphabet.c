/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:46:01 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/18 12:38:28 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	y;

	y = 'z';
	while (y >= 'a')
	{
		ft_putchar(y);
		y--;
	}
}
