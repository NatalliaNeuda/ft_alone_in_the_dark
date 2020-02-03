/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:53:48 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/30 13:15:45 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i;
	int *res;
	int sign;

	sign = 1;
	if ((end - start) < 0)
	   sign = -1;
	res = (int*)(malloc(sizeof (int) * ((end - start) * sign + 1)));
	i = -1;
	while (++i <= (end - start) * sign)
	{
		res[i] = start + (i * sign);
		printf("%d \n", res[i]);
	}
	return(res);	
}

int main()
{
	printf("1st elem:%d\n", *ft_range(0,0));
}
