/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:45:00 by exam              #+#    #+#             */
/*   Updated: 2019/10/22 16:09:01 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int x;
	unsigned int i;
	int n;

	x = 0;
	i = 0;
	while (i <= size)
	{
		n = 1;
		while (tab[i] > tab[i + n] && tab[i + n] &&  i <= size)
		{
			x = tab[i]; 
			tab[i] = tab[i + n];
			tab[i + n] = x;
			n++;
		}	
		i++;
	}
/*	i = 0;
	while (tab[i] && i <= size)
	{
		printf("%d\t", tab[i]);
		i++;
	}
	printf("\n");*/
}
/*
int main(void)
{
	int tab[10] = {9, -5, -1, 5, -1};
	sort_int_tab(tab, 5);
	return (0);
}*/
