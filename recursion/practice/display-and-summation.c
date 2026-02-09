#include<stdio.h>

int rec(int);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Enter positive number.\n");
        return 0;
    }
    printf("\b\b = %d\n", rec(num));
    return 0;
}

int rec(int n)
{
    int sum;
    if(n == 0)
    {
        return 0;
    }
    sum = n + rec(n-1);
    printf("%d + ", n);
    return sum;
}
