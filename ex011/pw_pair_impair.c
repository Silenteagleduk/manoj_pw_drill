#include <stdio.h>

char pw_pair_impair(char *str)
{
      if (str == NULL)
        {
            return 'N';
        }
    int i = 0;
    int count = 0;
    char result;
  

    while (str[i] != '\0')
    {
      
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count ++;
        }
        i++;
    }
    if (count == 0)
    {
        result = 'P';
    }
    else if (count % 2 == 0) 
    {
        result = 'P';
    }
    else 
    {
        result = 'I';
    }
    return result;
}