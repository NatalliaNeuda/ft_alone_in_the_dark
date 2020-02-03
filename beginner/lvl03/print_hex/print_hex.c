/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 00:07:57 by nneuda            #+#    #+#             */
/*   Updated: 2019/12/15 21:16:11 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	char hex;

	if (nb > 16)
	{
		ft_putnbr(nb / 16);
	}
	nb = nb % 16;
	if (nb > 9)
		hex = nb + 'a' - 10;
	else 
		hex = nb + '0';
	ft_putchar(hex);
}

int main(int ac, char *av[])
{
	int nb;
	int i;
	int hex;

	nb = 0;
	hex = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			nb = 10 * nb + av[1][i] - '0';
			i++;
		}
		ft_putnbr(nb);
	}
	write(1, "\n", 1);
	return (0);
}
