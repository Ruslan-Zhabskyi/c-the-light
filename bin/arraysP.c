#include <stdio.h>   
int main()
{
    int myarray[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int i;

    for (i=0; i <10; i++)
    {
        printf("Array value %d is %p\n", i, (myarray + i));
    }
}