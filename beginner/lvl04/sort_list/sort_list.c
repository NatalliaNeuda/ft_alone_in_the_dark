/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:00:12 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/04 17:20:23 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//passed Moulinette 02.04.2020

#include "list.h"
#include <stdlib.h>
//#include <stdio.h>

/*
int cmp(int a, int b)
{
	return (a <= b);
}
*/
void ft_swap_lst(t_list *l1, t_list *l2)
{
	int tmp_d;
	
	tmp_d = l1->data;
	l1->data = l2->data;
	l2->data = tmp_d;
}

/* 
void print_lst(t_list *cur)
{
    while (cur != 0)
    {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}
*/
t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
	int tmp = 1;
	t_list *cur = lst;

	while (tmp == 1)
	{
		tmp = 0;
		while  (cur != 0 && cur->next != 0)
		{
			if (cmp(cur->data, cur->next->data) == 0)
				{
					ft_swap_lst(cur, cur->next);
					tmp = 1;
				}
			cur = cur->next;	
		}
		cur = lst;
	}
	return (lst);
}
/*
int main(void)
{
    //t_list **cur;


    t_list *c = (t_list*)malloc(sizeof(t_list));
    c->next = 0;
    c->data = 9;

    t_list *b = (t_list*)malloc(sizeof(t_list));
    b->next = c;
    b->data = 15;

    t_list *a = (t_list*)malloc(sizeof(t_list));
    a->next = b;
    a->data = 0;



//	ft_swap_lst(b,c);
	print_lst(a);
	printf("\n");
	a = sort_list(a, cmp);
	print_lst(a);
    return (0);
}*/
