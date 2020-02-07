/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:29:14 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/26 14:04:04 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check(char *s, char c, int i)
{
	while (i >= 0)
	{	
		if (s[i] == c)
			return(0);
		i--;
	}
	return(1);
}

void ft_search(char *av1, char *av2)
{
	int i;
	int len;

	i = 0;
	while (av1[i])
	{
		if (ft_check(av1, av1[i], i - 1) == 1)
			write(1, &av1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while (av2[i])
	{
		if (ft_check(av2, av2[i], i - 1) == 1)
		{	
			if (ft_check(av1, av2[i], len) == 1)
				write (1, &av2[i], 1);
		}
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 3)
		ft_search(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
