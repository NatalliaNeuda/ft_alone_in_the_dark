/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:28:46 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/30 20:33:05 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int wdmatch(char *s1, char *s2)
{
	while(*s1)
	{
		while (*s2 && *s2 != *s1)
			s2++;
		if(*s2 != *s1)
		   return (0);
		s1++;
	}
	return (1);
}

int main (int ac, char **av)
{
	if (ac == 3)
		if (wdmatch(av[1], av[2]))
			while (*av[1])
				write(1, av[1]++, 1);
	write (1, "\n", 1);
	return (0);
}
