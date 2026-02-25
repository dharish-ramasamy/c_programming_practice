#include<stdio.h>

int larger(int, int);

int main(void)
{
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);
    printf("Larger number = %d\n", larger(x, y));
    return 0;
}

int larger(int a, int b)
{
    return a > b ? a : b;
}
