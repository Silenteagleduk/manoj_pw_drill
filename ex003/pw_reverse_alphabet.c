#include <unistd.h>

void pw_reverse_alphabet(void)
{
    char rv_a = 'z';
    while (rv_a >= 'a')
    {
        write(1, &rv_a, 1);
        rv_a--;
    }
    write(1, "\n", 1);
}