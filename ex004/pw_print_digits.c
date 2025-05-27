#include <unistd.h>

void pw_print_digits(void)
{
    char num = '0';
    while(num <= '9')
    {
        write(1, &num, 1);
        num++;
    }
    write(1, "\n", 1);
}