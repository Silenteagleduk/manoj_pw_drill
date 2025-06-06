#include <unistd.h>

void pw_print_bits(void)
{
    int num;
    for (num = 0; num <= 255; num++)
    {
        char binary[8];
        int i;

        
        for (i = 0; i < 8; i++)
            binary[i] = '0';

        
        i = 7;
        int n = num;
        while (n > 0 && i >= 0)
        {
            binary[i] = (n % 2) + '0';
            n = n / 2;
            i--;
        }

        write(1, binary, 8);
        write(1, "\n", 1);
    }
}

int main()
{
    pw_print_bits();
}