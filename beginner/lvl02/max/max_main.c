/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:16:19 by nneuda            #+#    #+#             */
/*   Updated: 2019/10/07 17:18:01 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = tab[i];
	if (!tab)
		return (0);
	while (i < len)
	{
		if (max <= tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int tab[] = {3, 8 ,8, 9, 123, 4};
	
	printf("%d\n", max(tab, 6));
	return (0);
}
