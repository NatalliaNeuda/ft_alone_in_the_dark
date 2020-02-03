/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:01:13 by nneuda            #+#    #+#             */
/*   Updated: 2020/01/17 20:16:41 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    equation(int n)
{
    int a;
    int b;
    int c;

    a = 0;
    while (a <= 9)
        {
            b = 0;
            while (b <= 9)
            {
                c = 0;
                while (c <= 9)
                {
                    if((a * 10 + b) + (c * 10 + a) == n)
                        printf("A = %d, B = %d, C = %d\n", a, b ,c);
                    c++;
                }
                b++;
            }
            a++;
        }
}

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        equation(atoi(av[1]));
    }
    return (0);
}