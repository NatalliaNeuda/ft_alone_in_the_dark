/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:18:32 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/25 19:24:04 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void ft_search(char *av1, char *av2)
{
	int i;
	int j;

	i = 0;
	while (av1[i])
	{
		j = 0;
		while (av2[j])
		{
			if (av1[i] == av2[j])
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
		ft_search(av[1],av[2]);
	write(1, "\n", 1);
	return (0);
}
