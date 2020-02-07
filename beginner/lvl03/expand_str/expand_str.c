/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:26:22 by nneuda            #+#    #+#             */
/*   Updated: 2019/10/21 21:08:42 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    int flag;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i])
        {            
            if (av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if (!(av[1][i] == ' ' || av[1][i] == '\t'))
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write (1, &av[1][i], 1);
            }
            i++;    
        } 
    }  
    write (1, "\n", 1); 
    return (0); 
}
   