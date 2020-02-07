/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:00:11 by nneuda            #+#    #+#             */
/*   Updated: 2020/01/08 13:42:43 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/*
int len_word(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		len++;
		i++;
	}
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
	
		if  (*str && (*str != ' ' && *str != '\t' && *str != '\n' && !flag))
		{
			flag = 1;
			q++;
		}
		if  ((*str == ' ' || *str == '\t' || *str == '\n') && *str)
			flag = 0;
		str++;
	}
	return(q);
}


char    **ft_split(char *str)
{
	int i;
	int x;
	int y;
	int q;
	int l;
    write(1, "1\n", 2);
	char **words;
	
	i = 0;
	q = q_words(str);
    printf("q = %d", q);
	if (!(words = (char **)malloc(sizeof (char*) * (q + 1))))
			return (NULL);
	while (str[i])
	{
		x = 0;
		while (x < q)
		{
			l = len_word(str, i);
			*words = (char *)malloc(sizeof (char) * l + 1);
			y = 0;
			while (y < l)
			{
				words[x][y++] = str[i++];
				printf("%c", words[x][y]);
			}
			words[x][y] = '\0';
			i++;
			x++;
		}
	}
	return(words);
}*/

#include <stdlib.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (count_words(str) + 1));

	// same as count_words, except we save word to array instead of counting
	int i = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			// save word to array
			arr[i] = malloc_word(str);
			
            printf("%s\n", arr[i]);
            i++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}


int main(void)
{
	char s[] = "  ";
    char **s1;

//	printf("%d\n", q_words(s));
//	printf("%d\n", len_word(s, 0));
	s1 = ft_split(s);
    if(s[0])
        printf("%s\n", s1[0]);
	return (0);

}