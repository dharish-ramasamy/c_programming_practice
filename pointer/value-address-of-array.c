#include<stdio.h>

int main(void)
{
    int array[5] = {5, 10, 15, 20, 25};
    for(int i = 0; i < 5; i++)
    {
        printf("Value of array[%d] = %d \t", i, array[i]);
        printf("Address of array[%d] = %p\n", i, &array[i]);
    }

    return 0;
}
