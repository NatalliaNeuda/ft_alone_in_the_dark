/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:26:13 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 19:26:23 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed Moulinette 01.03.2020

//#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    return((n == 1) ? 1 : 0);
}

// int main()
// {
//     printf("You answer is %d\n", is_power_of_2(18));
//     return (0);
// }