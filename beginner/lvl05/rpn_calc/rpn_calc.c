/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:17:56 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 18:55:04 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define IS_DIGIT(x) (x >= '0' && x <= '9')
#define IS_OPERAND(x) (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')

int zero_dev(int x, char op)
{
    if (x == 0 && (op == '/' || op == '%'))
        return (1);
    return (0);    
}

int do_op(int x, int y, char op)
{
    int res = 0;

    if (op == '+')
        res = x + y;
    if (op == '-')
        res = x - y;
    if (op == '*')
        res = x * y;
    if (op == '%')
        res = x % y;
    if (op == '/')
        res = x / y;
    return (res);
}

int main(int ac, char **av)
{
    int arr[1000];
    int i = -1; 
    int res;
    
    if (ac == 2)
    {
        while (*av[1])
        {
            if ((*av[1] == '-' && IS_DIGIT(*(av[1] + 1))) || IS_DIGIT(*av[1]))
            {
                arr[++i] = atoi(av[1]); 
                if (*av[1] == '-')
                    av[1]++;
                while (IS_DIGIT(*av[1]))
                    av[1]++;
            }
            if (*av[1] == ' ')
                av[1]++;
            if (*av[1] && IS_OPERAND(*av[1]) && !IS_DIGIT(*(av[1] + 1)))
            {
                if (zero_dev(arr[i], *av[1]))
                {
                    printf ("Error");
                    return (0);
                }
                if (i >= 0)
                {
                    res = do_op(arr[i - 1], arr[i] , *av[1]);
                    arr[i] = 0;
                    arr[--i] = res;
                }
                else 
                {
                    printf ("Error");
                    return (0);
                }
                av[1]++;
            }   
        }
        if (i != 0)
            printf ("Error");
        else
            printf("%d\n", res);
    }
    else
        printf ("Error");
    return (0);
}