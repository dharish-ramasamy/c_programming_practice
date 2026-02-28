#include<stdio.h>

int display(int);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Enter positive integer greater than 0.\n");
        return 0;
    }
    display(num);
    printf("\n");
    return 0;
}

int display(int n)
{
    if(n == 0)
    {
        return 0;
    }
    display(n-1);
    printf(" %d ", n);
}
