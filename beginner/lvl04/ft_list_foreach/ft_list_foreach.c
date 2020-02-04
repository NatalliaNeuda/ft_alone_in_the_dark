/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 21:34:34 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 21:46:58 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list == 0)
		return; 
    while (begin_list != 0)
    {
        (*f)(begin_list->data);
        begin_list = begin_list -> next; 
    }   
}

// void	print_data(void *data)
// {
// 	printf("%s\n", data);
// }

// int	main(void)
// {
// 	t_list *test_list = malloc(sizeof(t_list));
// 	test_list -> data = "Hi";
// 	test_list -> next = malloc(sizeof(t_list));
// 	test_list -> next -> data = "42";
// 	test_list -> next -> next = malloc(sizeof(t_list));
// 	test_list -> next -> next -> data = "peers!";
// 	test_list -> next -> next -> next = NULL;

// 	ft_list_foreach(test_list, print_data);
// 	return (0);
// }