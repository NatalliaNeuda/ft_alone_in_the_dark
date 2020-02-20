#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int ft_numlen(int nb)
{
	int len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		nb = nb/10;
		len++;
	}	
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *s;
	long div;
	int len;
	int i;
	
    i = 0;
	
	len = ft_numlen(nbr); 
	s = (char*)malloc(sizeof (char) * (len));
    div = (long) nbr;
    if (div < 0)
    {
        s[i] = '-';
        div = (-1) * div;
    }
    else
        s[i] = '0';     
    i = 0;
	while (div > 1)
	{ 
		s[len - (1 + i)] = '0'  + ((div % 10));
        div = div / 10; 
        i++;
	}
    s[len] = '\0';
	return (s);
}

int main(void)
{
	char *s;
	int nb = -2147483648;

	s = ft_itoa(nb);
	printf("%s\n", s);

   return (0);	
}

// #include <stdio.h>
// #include <stdlib.h>

// int numlen(int nb)
// {
// 	int len = 1;

// 	while (nb < -9)
// 	{
// 		nb /= 10;
// 		len++;
// 	}
// 	return(len);

// }


// char	*ft_itoa(int nbr)
// {
// 	int sign = 0;
// 	int len;
// 	char *s;
// 	int i = 0;
// 	int div;

// 	if(nbr < 0)
// 		sign = 1;
// 	else
// 		nbr *= -1;
// 	div = nbr;
// 	len = numlen(nbr) + sign;
// 	s = (char*)malloc(sizeof(char) * len + 1);
// 	if (sign)
// 	{
// 		s[0] = '-';
// 		// sign = 0;
// 	}
// 	while (i < len - sign)
// 	{
// 		s[len - i - 1] = -(div % 10) + '0';
// 		div /= 10;
// 		i++;
// 	}
// 	s[len] = '\0';
// 	return(s);
// }

// int main(void)
// {
// 	int nbr = 147483648;

// 	printf("%s\n", ft_itoa(nbr));
// 	return(0);
// }