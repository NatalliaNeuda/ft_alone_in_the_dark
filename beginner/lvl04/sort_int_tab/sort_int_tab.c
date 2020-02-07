/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:45:00 by exam              #+#    #+#             */
/*   Updated: 2020/02/03 21:16:24 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int x;
	unsigned int i;
	int n;

	x = 0;
	i = 0;
	while (i < size)
	{
		n = 1;
		while (i + n < size)
		{
			if (tab[i] >= tab[i + n])
			{
				x = tab[i]; 
				tab[i] = tab[i + n];
				tab[i + n] = x;
			}
			n++;
		}	
		i++;
	}
}

int main(void)
{
	int i;
	int tab[8] = {0, 1, 4, 2, 0, 42, 59, 67};

	sort_int_tab(tab, 8);
	i = 0;
	while (i < 8)
	{
		printf("%d\t", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
