/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:07:23 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/26 15:55:30 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);

}

int main()
{
 char str[] = "absh";
 char to_find[] = "vbnm";

 printf("%d\n", ft_strcmp(str, to_find));
 printf("%d\n", strcmp(str, to_find));

 return(0);
}

