/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:49:07 by nneuda            #+#    #+#             */
/*   Updated: 2019/08/01 19:37:00 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
    int sign;
    int res;

    sign = 1;
    res = 0;
    while (*s)
    {
        while ((*s == ' ') || (*s >= 9 && *s <= 13))
            s++;
        if (*s == '-')
            sign = -1;
        while (*s == '-' || *s == '+')
            s++;
        while (*s && *s >= '0' && *s <= '9')
        {
            res = res * 10 + *s - '0';
            s++;
        }
    }
    return (res * sign);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(unsigned int nb)
{
    if (nb < 0)
    {
        nb = nb * -1;
        ft_putnbr(nb / -10);
        ft_putnbr(('0' + nb % 10) * -1);
        return;
    }
    if (nb > 9) 
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int main(int ac, char *av[])
{
    int i;
    unsigned int nb;

    i = 1;
    nb = 0;
    if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nb);
            write(1, " = ", 3);
            ft_putnbr(nb *  i);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n",1);
    return (0);
}