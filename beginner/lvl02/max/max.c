#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int max;
   
 	i = 0;
	max = tab[i];
	if (!tab)
		return (0);
	else
	{
		while (i < len)
		{
			if (max <= tab[i])
				max = tab[i];
			i++;
		}
		return (max);
	}
}

int main(void)
{
    int tab[] = {1, 4, 6, 0};
   
    printf("Max value is: %d\n", max(tab, 4));
    return (0); 
}
