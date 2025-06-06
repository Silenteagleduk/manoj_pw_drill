#include <unistd.h>

void pw_putnbr(unsigned int nb)
{
    char str[20];
    int i = 0;

    if (nb == 0)
    {
        char c = '0';
        write(1, &c, 1);
        return;
    }

    while (nb > 0)
    {
        str[i++] = (nb % 10) + '0';
        nb = nb / 10;
    }

    while (i--)
    {
        write(1, &str[i], 1);
    }
}
