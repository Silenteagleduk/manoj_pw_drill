#include <unistd.h>

void pw_count_to_n(unsigned int n)
{
    unsigned i = 0;
    
    while ( i <= n)
    {
        char num = '0' + i;
        write(1, &num, 1);
        write(1, "\n", 1);
        i++;
    }
}