char *pw_strncpy(char *dest, char *src, unsigned int n)
{

    if (dest == 0)
    {
        return 0;
    }
    if(src == 0 || n == 0)
    {
        return dest;
    }
    int m = (int)n;
    int i = 0;
    while(i < m && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < m)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}