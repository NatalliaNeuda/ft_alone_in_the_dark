/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:49:00 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 19:01:45 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed Moulinette 01.03.2020

#include <unistd.h>

int main(void)
{
	write(1, "z\n", 2);
	return (0);
}
