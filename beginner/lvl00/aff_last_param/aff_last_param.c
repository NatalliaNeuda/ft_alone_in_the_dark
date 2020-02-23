/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:55:52 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/22 21:47:55 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed moulinette 02.22.2020

#include <unistd.h>

int main(int ac, char *av[])
{
	if (ac > 1)
		while (*av[ac -1])
			write(1, av[ac - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}
