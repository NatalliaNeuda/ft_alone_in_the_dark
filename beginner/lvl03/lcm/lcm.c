/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:04:19 by nneuda            #+#    #+#             */
/*   Updated: 2019/09/24 00:08:44 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    hcm(unsigned int a, unsigned int b)
{
    int max;
    int i;

    max = 0;
    i = 1;
    while (i <= a || i <= b)
    {
        if( a % i == 0 && b % i == 0)
            max = i;
        i++;
    }
    return (max);
}
unsigned int    lcm(unsigned int a, unsigned int b)
{
    int r;
    
    r = 0; 
    r = (a * b)/hcm(a, b);  
    return(r) ; 
}

int main()
{
    unsigned int a = 4;
    unsigned int b = 26;
    printf("%d\n", lcm(a,b));
    return (0);
}