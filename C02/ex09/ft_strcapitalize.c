/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:17:37 by scaglaya          #+#    #+#             */
/*   Updated: 2022/03/02 16:24:49 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char ax)
{
	if (!(ax >= 'a' && ax <= 'z') && !(ax >= 'A' && ax <= 'Z')
		&& !(ax >= '0' && ax <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	sp;

	sp = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			sp = 1;
		}
		else
		{
			if (sp == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (sp == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			sp = 0;
		}
		i++;
	}
	return (str);
}

/*
int	main()
{
	char a[] = "ayato, hakushima +ssplus -draknight";
	printf("%s",ft_strcapitalize(a));
}
*/
