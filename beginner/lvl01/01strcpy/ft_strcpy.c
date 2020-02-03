/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:57:33 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/23 15:10:37 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
	
char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
		while (s2[i] != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char s[] = "pacman";
	char villian [] = "frogger";

	ft_strcpy(s, villian);
	printf("%s\n", s);
	return 0;
}
