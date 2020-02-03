#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
// {
//     unsigned char res;
//     int i;

//     i = 8;
//     res = 0b00000000;
//     while(i > 0)
//     {
//         res = (res << 1) + (octet % 2);
//         octet >>= 1;
//         i--;
//     }
//     return (res);
// }
{
	unsigned int i;
	unsigned char res;
	
	res = 0;
	i = 8;
	while (i > 0)
	{
        res = res << 1;
		res = res + (octet % 2);
		octet = octet >> 1;
		i--;
	}
	return (res);
}
void print_bits(unsigned char octet)
{
    unsigned char div;

    div = 0b10000000;
    while (div != 0)
    {
        if (div & octet)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        div >>= 1;   
    }
    write(1, "\n", 1);  
}

int main()
{
    print_bits(131);
    print_bits(reverse_bits(131));
    return (0);
}
