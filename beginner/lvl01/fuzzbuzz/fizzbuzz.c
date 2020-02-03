/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:02:36 by nneuda            #+#    #+#             */
/*   Updated: 2019/10/09 16:30:52 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
	char c;

	c = 0;
	if (n > 9)
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
	if ( n <= 9)
	{
		c = n + '0';
		write (1, &c, 1);
	}
}

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else 
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}	
