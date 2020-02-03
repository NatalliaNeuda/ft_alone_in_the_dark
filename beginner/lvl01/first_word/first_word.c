/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:40:28 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/24 14:04:06 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(int i)
{
	if (i == '\t' || i == '\n' || i == '\r' || i == '\v' || i == '\f' || i == ' ')
		return (1);
	return (0);
}

int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (ft_isspace(argv[1][i]))
			i++;
		while (!(ft_isspace(argv[1][i])) && argv[1][i])
				write(1, &argv[1][i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
