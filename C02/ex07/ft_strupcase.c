/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:53:56 by scaglaya          #+#    #+#             */
/*   Updated: 2022/03/02 16:31:27 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "unistd.h"

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char a[]="ayato";
	printf("%s",ft_strupcase(a));
}
*/
