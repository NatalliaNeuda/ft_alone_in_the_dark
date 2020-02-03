/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 02:09:03 by nneuda            #+#    #+#             */
/*   Updated: 2019/08/01 02:25:41 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' \
                    || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char *av[])
{
    int i;

    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            rstr_capitalizer(av[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}