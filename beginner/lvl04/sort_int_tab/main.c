/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:26:26 by nneuda            #+#    #+#             */
/*   Updated: 2019/10/22 14:48:58 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);

int main(void)
{
    int i;

	int tab[8] = {2, 1, 4, 67, 2, 59, 42, 2};
    // int tab[8] = {1, 5, 9, 178, 15, 228, 1111, 0};
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