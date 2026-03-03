#include<stdio.h>
#include<stdbool.h>

bool isprime(int);

int main(void)
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(isprime(num))
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }

    return 0;
}

bool isprime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
