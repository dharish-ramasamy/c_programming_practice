#include<stdio.h>

int sum_of_digit(int);

int main(void)
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = sum_of_digit(num);
    printf("\b\b = %d\n", sum);
    return 0;
}

int sum_of_digit(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int rem = n%10;
    int quo = n/10;
    int sum = rem + sum_of_digit(quo);
    printf("%d + ", rem);
    return sum;
}
