/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:10:22 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/28 17:33:16 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	b;

	i = 0;
	while (true)
	{
		b = str[i];
		if (b == '\0')
		{
			return (1);
		}
		if ((b >= '0' && b <= '9'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
