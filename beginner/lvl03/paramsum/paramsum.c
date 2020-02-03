/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:34:12 by nneuda            #+#    #+#             */
/*   Updated: 2019/09/24 01:09:08 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_putchar(char c)
{
    write(1, &c, 1); 
}
*/
/*void ft_putnbr(int nb)
{
    if (nb < 0)
    { 
        ft_putchar('-');
        ft_putnbr(nb / -10);
        ft_putchar((nb % 10 + '0') * -1);
        return;
    }
    if (nb > 9)
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
    else
    ft_putchar(nb + '0'); 
}*/
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

