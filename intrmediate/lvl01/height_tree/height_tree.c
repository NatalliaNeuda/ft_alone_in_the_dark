/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:39:59 by nneuda            #+#    #+#             */
/*   Updated: 2020/03/06 20:26:24 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
    int     value;
	struct  s_node **nodes;
};

int get_height(struct s_node *brunch)
{
    int i = 0;
    int max = 0;
    int q = 0;

    while (brunch->nodes && brunch->nodes[i])
    {
        q = get_height(brunch->nodes[i]) + 1;
        if (q > max)
            max = q;
        i++; 
    }
    return(max);
}

int height_tree(struct s_node *root)
{
    int hight = -1;

    if (root)
        hight = get_height(root);
    return(hight);           
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	struct s_node *node94 = malloc(sizeof(struct s_node));
// 	struct s_node *node34 = malloc(sizeof(struct s_node));
// 	struct s_node *node52 = malloc(sizeof(struct s_node));
// 	struct s_node *node1 = malloc(sizeof(struct s_node));
// 	struct s_node *node99 = malloc(sizeof(struct s_node));
// 	struct s_node *node11 = malloc(sizeof(struct s_node));
// 	struct s_node *node13 = malloc(sizeof(struct s_node));
//     struct s_node *node44 = malloc(sizeof(struct s_node));

// 	node94->nodes = malloc(sizeof(struct s_node) * 10);
// 	node94->nodes[0] = node34;
// 	node94->nodes[1] = node52;
// 	node94->nodes[2] = 0;

// 	node34->nodes = malloc(sizeof(struct s_node) * 10);
// 	node34->nodes[0] = node1;
// 	node34->nodes[1] = node99;
// 	node34->nodes[2] = 0;

// 	node52->nodes = malloc(sizeof(struct s_node) * 10);
// 	node52->nodes[0] = node11;
// 	node52->nodes[1] = 0;

// 	node1->nodes = malloc(sizeof(struct s_node) * 10);
// 	node1->nodes[0] = 0;

// 	node99->nodes = malloc(sizeof(struct s_node) * 10);
// 	node99->nodes[0] = node13;
// 	node99->nodes[1] = 0;

// 	node11->nodes = malloc(sizeof(struct s_node) * 10);
// 	node11->nodes[0] = 0;

// 	node13->nodes = malloc(sizeof(struct s_node) * 10);
// 	node13->nodes[0] = node44;

//     node44->nodes = malloc(sizeof(struct s_node) * 10);
// 	node44->nodes[0] = 0;

// 	printf("%d\n", height_tree(node94));
// }
