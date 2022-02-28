/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:33:54 by scaglaya          #+#    #+#             */
/*   Updated: 2022/02/28 17:13:26 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	b;
	
	i = 0;
	while(true)
	{
		b = str[i];
		if (b == '\0')
		{
			return (1);
		}	
		if ((b >= 'a' && b <= 'z'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}	
