#include <unistd.h>

int pw_count_e(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'e')
        {
            count++;
        }
        i++;
    }
    return count;

}