/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:49:43 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/22 22:08:03 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed Moulinette 02.22.2020

#include <stdio.h>
#include <stdlib.h>

int is_prime(int nb)
{
	int div;
	
	div = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (div <= (nb/div))
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);	
}


int main(int ac, char *av[])
{
	int nb;
	int prime;

	prime = 2;
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("%d", nb);
		while (nb > 1)
		{	
			if (nb == prime)
			{
				printf("%d", nb);
				break;
			}
			while(is_prime(prime) && nb % prime == 0)
			{
				if (nb != prime)
					printf("%d*", prime);
				else 
					printf("%d", prime);
				nb /= prime;
			}
			prime++;
		}	
	}
	printf ("\n");
	return (0);
}
