/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 00:07:57 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/30 00:59:33 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int res;
    int sign;

	sign = 1;
	res = 0;
    while ((*s == 32) || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
		sign = -1;
   	if (*s == '-' || *s == '+') 
	    s++;
    while (*s && *s <= '9' && *s >= '0')
        {
            res = (res * 10) + *s - '0';
            s++;
        }
    return (res * sign);
}

void print_hex(int n)
{
	//char c;

	if (n >= 16)
		print_hex(n / 16);
	if (n % 16 < 10)
	   n  = (n % 16) + '0';
	else
	   n  = (n % 16) + 'a' - 10;
	write (1, &n, 1);
}

int main(int ac, char *av[])
{
	if (ac == 4)
	{
		print_hex(ft_atoi(av[1]));
		printf("\n");

		printf("Origin atoi: %d \n", atoi(av[2]));
		printf("Custom atoi: %d \n", ft_atoi(av[3]));
	}
		return (0);
	
}
