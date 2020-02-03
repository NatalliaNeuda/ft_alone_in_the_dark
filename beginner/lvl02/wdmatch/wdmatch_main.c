/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:33:17 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/30 20:55:41 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int wdmatch(char *av1, char *av2)
{
	while (*av1)
	{
		while (*av2 && *av2 != *av1)
			av2++;
		if (*av1 != *av2)
			return (0);
		av1++;
	}
	return (1);
}
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		if (wdmatch(av[1], av[2]))
		{
			while (*av[1])
			{
				write(1, av[1], 1);
				av[1]++;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}
