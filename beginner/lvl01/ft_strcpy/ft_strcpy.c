/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:57:33 by nneuda            #+#    #+#             */
/*   Updated: 2020/02/03 14:53:54 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
	
char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

// int main(void)
// {
// 	char s[7] = "hello!";
// 	char villian[7] = "flower";

// 	ft_strcpy(s, villian);
// 	printf("%s\n", s);
// 	return 0;
// }