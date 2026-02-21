#include<stdio.h>

int *func(int*, int);

int main(void)
{
    int n = 5, arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = func(arr, n);
    for(int i = 0; i < 5; i++)
    {
        printf("Value of ptr+%d = %p, Value of *ptr+%d = %d\n", i, ptr+i, i, *(ptr+i));
    }
    return 0;
}

int *func(int *array, int num)
{
    int *p = array;
    return p; 
}
