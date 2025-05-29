#include <unistd.h>

void pw_putnbr(unsigned int nb)
{
    int str[20];
    int i = 0;
    if (nb == 0)
    {
        write(1, '0', 1);
    
    }
    while (nb >= 0)
    {
        str[i] = (nb%10) + '0';
        nb = nb / 10;
        i++;
    }
    while (i--)
    {
        write(1, &str[i], 1);
    }
}

