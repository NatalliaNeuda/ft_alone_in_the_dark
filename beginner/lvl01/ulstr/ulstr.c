/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:45:12 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 19:16:44 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed Moulinette 01.03.2020

#include <unistd.h>

int main(int ac, char *av[])
{
	char letter;

	if (ac == 2)
	{
		while (*av[1])
		{
			letter = *av[1];	
			if (*av[1] >= 'a' && *av[1] <= 'z')
				letter -= 32;
			else if (*av[1] >= 'A' && *av[1] <= 'Z')
				letter += 32;
			write(1, &letter, 1);	
			av[1]++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
