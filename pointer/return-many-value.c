#include<stdio.h>

void func(int , int, int*, int*, int*);

int main(void)
{
    int a = 6, b = 4, sum, diff, prod;
    func(a, b, &sum, &diff, &prod);
    printf("Sum = %d, Difference = %d, and Product = %d\n", sum, diff, prod);
    return 0;
}

void func(int x, int y, int *add, int *sub, int *mul)
{
    *add = x + y;
    *sub = x - y;
    *mul = x * y;
}
