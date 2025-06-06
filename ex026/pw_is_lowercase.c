int pw_is_lowercase(char *str)
{
    if (str == 0 || *str == 0)
    {
        return 0;
    }

    int i = 0;
    int len = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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
