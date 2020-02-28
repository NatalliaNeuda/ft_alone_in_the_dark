/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:15:01 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/27 19:36:28 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void to_low(char *s)
{
    while (*s)
    {
        if (*s >= 65 && *s <= 90)
            *s += 32;
        s++;
    }   
}

void clean_str(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            *s = '0';
        s++;
    }
}

int main(int ac, char *av[])
{
    int arr[26] = {0};
    int i = 0;
    int j = 0;
    int first = 1;
    int begunok = 0;

    if (ac == 2)
    {
        to_low(av[1]);
        while (av[1][j])
        {
            if ((av[1][j] >= 'a' && av[1][j] <= 'z'))
                arr[i + av[1][j] - 'a']++;
            j++;
            
        }
        j = 0;
        while (av[1][j])
        {
           
            if (av[1][j] >= 'a' && av[1][j] <= 'z')
            {
                if (!first)
                    printf(", ");
                printf("%d%c", arr[i + av[1][j] - 'a'], av[1][j]);
                clean_str(av[1], av[1][j]);
            }
            first = 0;
            j++;
        }
    }
    printf("\n");
    return(0);
}