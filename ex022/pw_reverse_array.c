#include <unistd.h>

void pw_reverse_array(int *arr, int size)
{
    int i = 0;
    int j = size - 1;
    int temp;

    while (i <= j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}




