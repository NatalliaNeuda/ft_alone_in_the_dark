/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 06:41:53 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/22 22:19:52 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed moulinette 02.22.2020

#include <unistd.h>

int main(int ac, char *av[])
{
	int nb[15];
	int i;
	int n;

	i = 1;
	n = 0;
    nb[n] = 0;
	if (ac > 1)
	{
		while (i <= ac - 1) 
		{
			while (*av[i])
			{
				if (*av[i] == '{')
					nb[n++] = 10;
				if (*av[i] == '[')
					nb[n++] = 5;
				if (*av[i] == '(')
					nb[n++] = 1;
				if (*av[i] == ')')
				{
                    if (nb[n - 1] == 1)
					{
                        nb[n - 1] = 0;
					    n--;
                    }
                    else 
                        n = 1;
				}
				if (*av[i] == '}')
				{
					 if (nb[n - 1] == 10)
					{
                        nb[n - 1] = 0;
					    n--;
                    }
                    else 
                        n = 1;
				}
				if (*av[i] == ']')
				{
					 if (nb[n - 1] == 5)
					{
                        nb[n - 1] = 0;
					    n--;
                    }
                    else 
                        n = 1;
				}
				av[i]++;
			}
            if(n == 0 && nb[n] == 0)
				write(1, "OK", 2);
            else
			{
                write(1, "Error", 5);
                n = 0;
			}			
            if (i + 1 <= ac - 1)    
                write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
