#include<stdio.h>

float add(int, float);

int main(void)
{
    float (*fp) (int, float); //declaring a function pointer
    float result; 

    fp = add; //assigning address of function add() to pointer *fp

    result = add(5, 6.6); //invoking a function directly using function's name
    printf("Result: %f\n", result);

    result = (*fp) (4, 5.6); //invoking a function indirectly by dereferencing function pointer
    printf("Result: %f\n", result);

    return 0;
}

float add(int a, float b)
{
    return a + b;
}
