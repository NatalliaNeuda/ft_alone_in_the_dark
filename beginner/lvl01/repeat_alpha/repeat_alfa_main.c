/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alfa_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:47:05 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/23 16:53:24 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int rep;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			rep = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z' )
				rep += (argv[1][i] - 'a');
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' )
				rep += (argv[1][i] - 'A');
			while (rep > 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
