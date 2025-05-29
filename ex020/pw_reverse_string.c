void pw_reverse_string(char *str)
{
    
    int i = 0; 
    int j = 0; 
    char temp;

    while (str[i] != '\0')
    {    
        i++;
    }
    i--;
    
    
    while (j < i)
    {
        temp =  str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    //shell error
    /*//str[] = "h e l l o \0"
    //           0 1 2 3 4 5

    i = '/0'
    i-- resets the value of i = 'o'

    j = 0;
    i = 4;
    j < i
          
        j 0 1 2 3 4 5

        temp = 

          h e l l o \0
        i 0 1 2 3 4 5

    */
    /* hello
    j = 0 and h
    temp = h
    i = 4 and o
    */
    


}