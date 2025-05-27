#include <unistd.h>

void pw_triangle(void)
{
    int i = 1;
    while (i <=3)
    {
        int j = 1;
        while (j <= i)
        {
            write(1, "a", 1);
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
}