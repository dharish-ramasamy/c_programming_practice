#include<stdio.h>

void conversion(int, int);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary: ");
    conversion(num, 2);
    printf("\nOctal: ");
    conversion(num, 8);
    printf("\nHexadecimal: ");
    conversion(num, 16);
    printf("\n");
    return 0;
}

void conversion(int n, int base)
{
    int rem = n % base;
    if(n == 0)
    {
        return;
    }
    conversion(n/base, base);
    if(rem > 9)
    {
        printf(" %c ", 'A'+(rem-10));
    }
    else
    {
        printf(" %d ", rem);
    }
}
