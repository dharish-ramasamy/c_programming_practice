#include<stdio.h>

int summation(int);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Enter positive number greater than 0.\n");
    }
    else
    {
        printf("Summation of numbers from 1 to %d is %d.\n", num, summation(num));
    }
    return 0;
}

int summation(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (n + summation(n-1));
}
