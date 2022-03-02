/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaglaya <scaglaya@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:33:56 by scaglaya          #+#    #+#             */
/*   Updated: 2022/03/02 16:52:36 by scaglaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char srcc[] = "Source string.";
	char destt[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", srcc, destt);

    dest = ft_strcpy(destt, srcc);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", srcc, destt);
	return (0);
}
