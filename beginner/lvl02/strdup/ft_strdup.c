/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:56:17 by nneuda            #+#    #+#             */
/*   Updated: 2019/09/28 15:25:56 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dest;
	//char *al_dest;

	i = 0;
	
	while (src[i] != '\0')
		i++;
	if (!(dest = (char*)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	//al_dest = dest;
	while (i >=  0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}

int main()
{
	char *src;

	src = "You will pass that final exam !!!";
	
	printf("%s \n", ft_strdup(src));
	printf("origin: %s \n", strdup(src));
	return (0);
}
