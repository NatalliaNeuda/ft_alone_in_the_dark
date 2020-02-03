/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 01:38:23 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/28 15:14:57 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i;
	int n;

	i = 0;
	n = end - start + 1;
	if (n == 0)
		n = 2;
	if (n < 0)
		n = (n * (-1)) + 2;
	range = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		if (end <=  start)
		{
			range[i] = end + i;
			printf("%d\n", range[i]);
		}
		else
		{
			range[i] = end - i;
			printf("%d\n", range[i]);
		}
	i++;	
	}
	return (range);
}

int main()
{
	printf("%i\n", *ft_rrange(-3,0));
	return (0);
}
