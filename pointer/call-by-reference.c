#include<stdio.h>

void value(int *p, int *q);

int main(void)
{
    int a = 5, b = 8;
    printf("a = %d, b = %d\n", a, b);
    value(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void value(int *p, int *q)
{
    (*p)++;
    (*q)++;
    printf("*p = %d, *q = %d\n", *p, *q);
}
