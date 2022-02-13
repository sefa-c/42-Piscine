/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:57:27 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/13 18:35:42 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_is_negative(int s)
{
	if (s < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}	
