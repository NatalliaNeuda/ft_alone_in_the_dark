/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer_wrong.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:37:16 by nneuda            #+#    #+#             */
/*   Updated: 2019/09/24 21:41:27 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int main (int ac, char **av)
{
	int i;
	int j;
	char c;

	i = 1;
	j = 0;
	if (ac == 1)
		write (1, "\n", 1);
	while (i <= ac - 1)
	{
		if (av[i][0] >= 'a' && av[i][0] <= 'z')
		{
			av[i][0] -= 32;
			write(1, &av[i][0], 1);
			j++;
		}
		//j = 0;		
		//printf("1st elem %c\n  i = %d\n, j = %d\n", av[i][j], i, j);
		while (av[i][++j])
		{
			c = av[i][j];
			if ((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j-1] == '\t' || av[i][j-1] == ' '))
				c = av[i][j] - 32;
			if (av[i][j] >= 'A' && av[i][j] <= 'Z' && (av[i][j -1] != '\t' && av[i][j -1] != ' '))
				c = av[i][j] + 32;
			write(1, &c, 1);
			//j++;
		}
		write(1, "\n", 1);
		i++;
		//printf("%c\n", c);
	}
	return (0);
}
