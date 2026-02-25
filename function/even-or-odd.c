#include<stdio.h>

void find(int);

int main(void)
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    find(num);
    return 0;
}

void find(int n)
{
    (n%2 == 0) ? printf("%d is even number\n", n) : printf("%d is odd number\n", n);
}
