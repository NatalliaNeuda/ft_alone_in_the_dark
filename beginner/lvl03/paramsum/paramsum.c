/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:34:12 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/04 17:28:38 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void ft_putnbr(int nb)
{
    char digit;

    if (nb >= 10)
        ft_putnbr(nb / 10);

    digit = nb % 10 + '0';
    write (1, &digit, 1);
}

int main(int ac, char *av[])
{
    (void)av;
    
    ft_putnbr(ac - 1);
    return (0);
}

