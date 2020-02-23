/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:04:33 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/22 22:05:04 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed moulinette 02.22.2020

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int size;
		
	size = 0;
	while (begin_list)
		{
			size++;
			begin_list = begin_list->next;
		}
	return (size);
}

//_____________MAIN_____

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int n = 0;

// 	t_list *c = malloc(sizeof(t_list));
// 	c->next = 0;
// 	c->data = &n;

// 	t_list *b = malloc(sizeof(t_list));
// 	b->next = c;
// 	b->data = &n;

// 	t_list *a = malloc(sizeof(t_list));
// 	a->next = b;
// 	a->data = &n;

// 	printf("%d\n", ft_list_size(a));
// }