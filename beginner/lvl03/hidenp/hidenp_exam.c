/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp_exam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:28:05 by exam              #+#    #+#             */
/*   Updated: 2019/09/17 15:29:54 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int search(char c, char *str, int j)
{
	int i;

	i = 0;
	while (*str)
	{	
		if (c == str[j+i])
			return (1);
		i++;
	}	
	return (0);
}

int	main(int ac, char **av)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (search(av[1][i], av[2], j))
					k++;
				j++;
				//break;
			}
			i++;
		}
			if (k == i)
				write(1, "1", 1);
			else 
				write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
