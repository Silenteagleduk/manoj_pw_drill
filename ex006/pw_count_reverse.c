#include <unistd.h>

void pw_count_reverse(unsigned int n)
{
    unsigned int i = n;
    while (1)
    {
        char num = '0' + i;
        write(1, &num, 1);
        write(1, "\n", 1);
        if(i == 0)
        {
            break;
        }
        i--;
    }
    
}