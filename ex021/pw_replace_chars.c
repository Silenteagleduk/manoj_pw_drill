#include <stdio.h>
void pw_replace_chars(char *str)
{
    if (str == NULL)
    {
        ;
    }
    int i = 0;
    while (str[i] != '\0')
    {
      
        if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = '?';
            }

        if (str[i] == 'e')
            {
                str[i] = '*';
            }
                     
                     
        i++;
    }

}
//shell error