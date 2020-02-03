/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:20:22 by nneuda            #+#    #+#             */
/*   Updated: 2020/01/17 20:37:37 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    count_2s(int n)
{
    int sum;

    sum = 0;
    while (n != 0)
    {
        if(n % 10 == 2)
            sum++;
        n /= 10;
    }
    return (sum);
}

int    count_of_2(int n)
{
    int i;
    int sum;

    i = 1;
    sum = 0;
    while (++i <= n)
        sum += count_2s(i);
    return(sum);
}

int main(int ac, char *av[])
{
    int nb;

    nb = atoi(av[1]);
    printf("%d\n", count_of_2(nb));
    return (0);
}