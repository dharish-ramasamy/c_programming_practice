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

    printf("%p %p %p\n", ptr, ptr+1, ptr+2);
    printf("%p %p %p\n", *ptr, *(ptr+1), *(ptr+2));
    printf("%d %d %d\n\n", **ptr, *(*(ptr+1)+2), *(*(ptr+2)+3));

    for(int i = 0; i < 3; i++)
    {
        printf("Elements & it's address in array of %p is [", ptr+i);
        for(int j = 0; j < 4; j++)
        {
            printf(" %d{%p}", *(*(ptr+i)+j), *(ptr+i)+j);
        }
        printf("]\n");
    }
}
