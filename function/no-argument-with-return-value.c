#include<stdio.h>

int func(void);

int main(void)
{
    printf("%d\n", func());
    return 0;
}

int func(void)
{
    int sum = 0;
    for(int num = 1; num <= 25; num++)
    {
        if(num%2 != 0)
        {
            sum += num * num;
        }
    }
    return sum;
}
