/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:01:41 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/26 15:14:00 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_check(char *s, char c, int i)
{
	while (i >= 0)
	{
		if (s[i] == c)
			return (0);
		i--;
	}
	return (1);
}

void ft_iter(char *av1, char *av2)
{
	int i;
	int j;

	i = 0;
	while (av1[i])
	{
		j = 0;
			while (av2[j])
			{
				if (av2[j] == av1[i])
				{
					if(ft_check(av1, av1[i], i - 1))
						write(1, &av1[i], 1);
					break;
				}
				j++;
			}
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 3)
		ft_iter(av[1],av[2]);
	write(1, "\n", 1);
	return (0);
}	
