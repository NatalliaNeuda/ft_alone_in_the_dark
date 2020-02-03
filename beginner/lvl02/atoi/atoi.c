/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:17:16 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/25 12:01:25 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
	int i;
	int rez;
	int neg;

	i = 0;
	rez = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' 
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		//printf("c =  %c ", str[i]);
		rez = rez * 10;
		rez = rez + str[i] - '0';
		//printf("d =  %d ", rez);
		i++;
	}
	if (neg == 1)
		return(-rez);
	else
		return (rez);
}

int main(void)
{
	char *str;

	str = " 	 -3340	fdg";
	printf("Origin atoi: %d \n", atoi(str));
	printf("Custom atoi: %d \n", ft_atoi(str));
	return (0);
}
