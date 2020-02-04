/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:53:48 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 20:27:51 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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
		res[i] = start + (i * sign);
	return(res);	
}

// int main()
// {
// 	printf("1st elem:%d\n", *ft_range(0,0));
// }
