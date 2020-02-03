/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbprk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:55:40 by nneuda            #+#    #+#             */
/*   Updated: 2019/10/15 17:12:44 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
		return (NULL);
}

int main()
{
	// char s1[20] = "1234567890";
	// char s2[20] = "0";

    char *s1 = "abcdefg";
    char *s2 = "ezzzfg";

	printf("%s\n", strpbrk(s1,s2));
	printf("%s", ft_strpbrk(s1,s2));
	return (0);
}