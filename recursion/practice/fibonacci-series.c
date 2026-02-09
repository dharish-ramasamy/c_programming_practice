#include<stdio.h>

int fibonacci(int);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        printf(" %d,",fibonacci(i));
    }
    printf("\b\n");
    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}
