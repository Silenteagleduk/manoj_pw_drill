int pw_is_alphabetic(char *str)
{
    if (str == 0)
    {
        return 0;
    }
    if (*str == 0)
    {
        return 1;
    }
    int i = 0;
    int len = 0;
    while(str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            len++;
        }
        i++;
    }
    if (len == i)
    {
        return 1;
    }
    if (i > len)
    {
        return 0;
    }
    return 0;
}
