/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_nase_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:20:38 by nneuda            #+#    #+#             */
/*   Updated: 2019/11/07 19:12:22 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int basecheck(char c, int base)
{
	if (base <= 9)
		return (c <= 9 && c >= 0);
	else
		return ((c <= 9 && c >= 0) || (c <= 'A' + base - 10 && c >= 0) || (c <= 'a' + base - 10 && c >= 0));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
    if (!str[0] || (str_base < 2 || str_base > 16))
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && basecheck(*str, str_base))
	{
		if (*str >= '0' && *str <= '9')
			res = res * str_base + *str - 48;
		if (*str >= 97 && *str <= 102)
			res = res * str_base + *str - 97 + 10;
		if (*str >= 65 && *str <= 70)
			res = res * str_base + *str - 65 + 10;
		str++;
	}
	return (res * sign);
}

int main(void)
{
  char s[20] = "2147483647";

  printf("%d\n", ft_atoi_base(s, 10));
  printf("%d", atoi(s));
  return(0);
  /*char *c;

    c = "aC";
    printf("Input: %d\n", ft_atoi_base(c, 22));
    return (0);*/
}