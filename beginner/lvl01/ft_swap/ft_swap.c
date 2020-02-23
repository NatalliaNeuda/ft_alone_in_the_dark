/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:48:59 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/22 22:18:41 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed moulinette 02.22.2020

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
