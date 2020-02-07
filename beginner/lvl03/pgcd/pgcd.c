/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 00:38:20 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 20:41:19 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed Moulinette 01.03.2020

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int max;
    int i;
    int n1;
    int n2;


    i = 1;
    max = 0;
    if (ac == 3)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[2]);
        while ( i <= n1 || i <= n2)
        {
            if (n1 % i == 0 && n2 % i == 0)
                max = i;
            i++;
        } 
        printf("%d", max);       
    }
    printf("\n");
    return(0);
}

