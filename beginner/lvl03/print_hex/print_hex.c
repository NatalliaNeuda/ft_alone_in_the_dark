/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 00:07:57 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 20:21:14 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char hex_digits[] = "0123456789abcdef";

	if (nb >= 16)
		ft_putnbr(nb / 16);
	write(1, &hex_digits[nb % 16], 1);
}

int main(int ac, char *av[])
{
	int nb;

	nb = 0;
	if (ac == 2)
	{
		while (*av[1])
		{
			nb = 10 * nb + (*av[1] - '0');
			av[1]++;
		}
		ft_putnbr(nb);
	}
	write(1, "\n", 1);
	return (0);
}
