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
    {
        //nbr = nbr * (-1);
        s[i] = '0';     
    }
    i = 0;
    // div = nbr;
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
