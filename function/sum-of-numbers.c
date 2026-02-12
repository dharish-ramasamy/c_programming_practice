#include<stdio.h>

int sum(int x, int y); // function declaration

int main(void)
{
    int x, y, total;
    printf("Enter values for x and y : ");
    scanf("%d%d", &x, &y);
    total = sum(x,y); // function call
    printf("Sum of %d and %d is %d\n", x, y, total);
    return 0;
}

int sum(int x, int y) // function definition
{
    int s = x + y;
    return s;
}
