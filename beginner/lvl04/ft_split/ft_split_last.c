/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 20:35:35 by nneuda            #+#    #+#             */
/*   Updated: 2020/01/19 09:48:23 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int lenword(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		if (ft_isspace(*s) || *s == '\0')
			return (len);
		len++;
		s++;
	}
	return (len);
}

int qwords(char *s)
{
	int q;
	int flag;

	q = 0;
	flag = 0;
	while(*s)
	{
		if (*s != ' ' && !ft_isspace(*s))
		{
			flag = 1;
			s++;
		}
		else if (ft_isspace(*s) && flag)
		{
			q++;
			flag = 0;
			s++;
		}
		else
			s++;
	}
	return(q);
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

char    **ft_split(char *str)
{
	int i;
	char **s;
	int q;

	i = 0;
	q = qwords(str);
    if (q == 0)
        return (NULL);
	if (!(s = (char**)(malloc(sizeof(char*) * q + 1))))
		return (NULL);
	while(*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			s[i] = malloc_word(str);
            i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	s[i] = NULL;
	return(s);
}

int main(void)
{
	char s[] = " ";
    char **s1;

//	printf("%d\n", q_words(s));
//	printf("%d\n", len_word(s, 0));
	s1 = ft_split(s);
    if(s[0])
        printf("%s\n", s1[0]);
	return (0);

}