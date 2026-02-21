#include<stdio.h>

int main(void)
{
    int a = 5, b = 10, c = 15;
    int *ptr[3];
    
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    for(int i = 0; i < 3; i++)
    {
        printf("ptr[%d] = %p\t", i, ptr[i]);
        printf("*ptr[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}
