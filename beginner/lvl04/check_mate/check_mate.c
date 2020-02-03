/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:33:29 by nneuda            #+#    #+#             */
/*   Updated: 2019/12/23 21:04:28 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int flag = 0;

int ft_strlen(char *s)
{
    int len;

    len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    return (len);
}
void find_k(char **s, int x, int y, int len)
{
    int shift;
    int i = 0;
    int j = 0;

    shift = 1;
	write(1, &len, 1);
    while(s[i])
    {
        write(1, "here\n", 5);
        j = 0;
        if (s[i][y] == 'R' || s[i][y] == 'Q')
            flag = 1;            
        while (s[i][j])
        {
            if (s[x][j] == 'R' || s[x][j] == 'Q')
			{
				flag = 1;
				write(1, "find", 1);
			}
            j++;       
        }
        i++;
    }
    int x1 = x;
    int y1 = y;
    int len1 = len - 1;
    while  (x <= shift && y <= shift)
    {
         //printf("here1");
        if ((s[x - shift][y - shift]) == 'Q' || (s[x - shift][y - shift] == 'B')) 
            flag = 1;
        shift++;
    }
    shift = 1;
    while  (x + shift <= len1 && y + shift <= len1)
    {
        if ((s[x + shift][y + shift]) == 'Q' || (s[x + shift][y + shift] == 'B')) 
            flag = 1;
        shift++;
    }
    shift = 1;
    while  (x + shift <= len1 && y <= shift)
    {
        if ((s[x + shift][y - shift]) == 'Q' || (s[x + shift][y - shift] == 'B')) 
            flag = 1;
        shift++;
    }
    shift = 1;
    while  (x <= shift && y + shift <= len1)
    {
        if ((s[x - shift][y + shift]) == 'Q' || (s[x - shift][y + shift] == 'B')) 
            flag = 1;
        shift++;
    } 
} 


void ft_search(char **s, int len)
{
    int i = 0;
    int j = 0;

    while (s[i])
    {
        j = 0;
        while (s[i][j])
        {
		// write (1, &s[i][j], 1);
		// write (1, "\n", 1);
            if (s[i][j] == 'K')
			{
				//	printf("king");
               find_k(s, i, j, len);
			   break;
			}
            j++;
        }
        i++;
    }
}


int main(int ac, char *av[])
{
    int i;
    int j;
	char **board;


    if (ac > 2 && ac < 9)
    {
        int lines = ac - 1;
        //printf("%d", lines);
        board = (char**)malloc((sizeof (char*) * lines + 1));
        i = lines;
        // while (i)
        // {
        //     if (lines != ft_strlen(av[i]))
        //   	    write(1, "Fail", 4);
		// 	i--;
        // }
		i = 0;
        while(i < lines)
        {
            j = 0;
       		board[i] = (char*)malloc((sizeof (char) * lines + 1));
            while (j < lines)
            {
			//printf("i = %d | j = %d\n", i , j);
				board[i][j] = av[i+1][j];
				printf("%2c", board[i][j]);
				j++;
			}
            //if (j == lines + 1)
			board[i][j] = '\0';
			i++;
            printf("\n");
//            printf("here");
        }
        //printf("%d\n", i);
		board[lines] = NULL;
		ft_search(board, lines);
        if(flag)
            printf("Success");
        else
            printf("Fail");
    }
	return (0);
    //write(1, "\n", 1);
}
