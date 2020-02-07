/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:49:45 by nneuda            #+#    #+#             */
/*   Updated: 2020/01/20 22:13:06 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int array_summ(int *arr, int n)
{
    int sum;
    int i;

    sum = 0;
    i = 0;
    while (i < n)
    {
        sum += arr[i];
        i++;
    }
    return(sum);
}


int	find_pivot(int *arr, int n)
{
    int left;
    int right;
    int i;

    right = array_summ(arr + 1, n - 1);
    i = 1;

    if(left == right)
        return (0);
    while(i < n)
    {
        left += arr[i - 1];
        right -= arr[i];
        if(left == right)
            return(i);
        i++;
    } 
    return (-1);
}

int main(int ac, char *av[])
{
    int arr[5] = {1, 3, 3, 4, 0}; 
    int n;

    n = 5;
    printf("%d\n", array_summ(arr, n));
    printf("%d", find_pivot(arr, n));
    return(0);
}