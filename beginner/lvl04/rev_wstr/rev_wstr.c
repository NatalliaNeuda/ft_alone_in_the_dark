/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:02:12 by nneuda            #+#    #+#             */
/*   Updated: 2019/11/21 18:10:46 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>*/




#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t');
}

int wordlen(char *str)
{
   int len = 0;
   while (*str != ' ' && *str != '\t' && *str != '\0')
    {
        str++;
        len++;
    }
  //printf("%d", len);
  return (len);
}

int q_words(char *str)
{
	int q;
	int flag;

	flag = 0;
	q = 0;
	while (*str)
	{
	
		if  (*str && (!ft_isspace(*str) && !flag))
		{
			flag = 1;
			q++;
		}
		if  (ft_isspace(*str) && *str)
			flag = 0;
		str++;
	}
	return(q);
}

char *mallocword(char *str)
{
    char *word;
    int i;

    i = 0;
    word = (char *)malloc(sizeof(char) * (wordlen(str) + 1));
    while (str[i] && !ft_isspace(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

int main(int ac, char *av[])
{
    char **arr = (char **)malloc(sizeof(char *) * (q_words(av[1]) + 1));
    int i = 0;
    
    if (ac == 2)
    {
        while (*av[1])
	    {
		// move to the beggining of a new word
		    while (*av[1] && ft_isspace(*av[1]))
			    av[1]++;
		    if (*av[1] && !ft_isspace(*av[1]))
		    {
                
			// save word to array
			    arr[i] = mallocword(av[1]);
                i++;
                
			// move to the next whitespace
			    while (*av[1] && !ft_isspace(*av[1]))
				    av[1]++;
                //write(1, "HERE\5", 5);
		    }
        }
        arr[i] = NULL;
        i--;
        while (i >= 0)
        {
            int len = wordlen(arr[i]) + 1;
            write(1, arr[i], len);
            write(1, "\n", 1);
            i--;
        }
    }
    write (1, "\n", 1);
    return (0);hui
    }