#include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char div;

    div = 0b0000001;
    while (div !=0)
    {
        if (div & octet)
            write(1, "1", 1);
        else
            write (1, "0", 1);
        div <<= 1;
    }
}

int main(void)
{
    print_bits(129);
}