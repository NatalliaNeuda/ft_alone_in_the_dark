/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:47:37 by nneuda            #+#    #+#             */
/*   Updated: 2019/09/24 20:59:14 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
                return (i);
			j++;
		}
		i++;
	}
	//if (s[i] == '\0')
		return (i);
	//return (0);
}

int main(void)
{
	const char a[] = "This is a test string";
	const char b[] = "a";

	printf("original function %zu\n ", strcspn(a, b));
	printf("Custom function %lu\n", ft_strcspn(a, b));
	return(0);
}