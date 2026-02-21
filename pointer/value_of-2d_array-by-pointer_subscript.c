#include<stdio.h>

int main(void)
{
    int array[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };
    int (*ptr)[4];
    ptr = array;

    for(int i = 0; i < 3; i++)
    {
        printf("Elements & it's address in array of %p is [", ptr+i);
        for(int j = 0; j < 4; j++)
        {
            printf(" %d{%p}", *(*(ptr+i)+j), *(ptr+i)+j);
        }
        printf("]\n");
    }
    return 0;
}
