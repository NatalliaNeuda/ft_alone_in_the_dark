/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:29:42 by nneuda            #+#    #+#             */
/*   Updated: 2019/07/23 15:40:56 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int main(void)
{
	char str[] = "Nata";

	printf("length is: %d\n", ft_strlen(str));
	return (0);
}
