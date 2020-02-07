#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int sign;
    int nb;

    sign = 1;
    nb = 0;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
            s++;
    if (*s == '-')
            sign = -1;
    if (*s == '-' || *s == '+')
            s++;
    while (*s && *s >= '0' && *s <= '9')
        {
            nb = nb * 10 + *s - '0';
            s++;
        }
    return (nb * sign);
}

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    //printf("ispr enter %d  = %i\n", nb, nb % i);
    if (nb <= 1)
        return (0);
    while (i <= nb / 2)
    {
        if (!(nb % i))
            return(0);
        i += 1;
    }
    return (1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(unsigned int nb)
{
    if (nb < 0)
    {
        nb = nb * -1;
        ft_putnbr(nb / -10);
        ft_putnbr(('0' + nb % 10) * -1);
        return;
    }
    if (nb > 9) 
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int main(int ac, char *av[])
{
    int nb;
    int sum;

    if (ac == 2) 
    { 
        sum = 0;
        nb = ft_atoi(av[1]);
        while (nb > 1)
        {
            if (ft_is_prime(nb--))
            {
                //printf("before sum = %d\n", sum);
                sum += nb+1;
                //printf("after sum = %d\n", sum);
            }
        }
        ft_putnbr(sum);
    }
    if ( ac != 2)
    	ft_putnbr(0);
    write (1, "\n", 1);
    return (0);
    /*/char *c;

    c = "   - 42";
    printf("Origin atoi: %d\n", atoi(c));
    printf("Custom atoi: %d\n", ft_atoi(c));
    return(0);*/
}