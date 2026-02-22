#include<stdio.h>

float add(int, float);
float sub(int, float);
float mul(int, float);
float divi(int, float);

int main(void)
{
    int a;
    float b;
    float (*fp[])(int, float) = {add, sub, mul, divi};
    char *operation[] = {"Add", "Subtraction", "Multiplication", "Division"};

    printf("Enter integer and float values: ");
    scanf("%d%f", &a, &b);

    for(int i = 0; i < 4; i++)
    {
        printf("%s of %d and %f is %f\n", operation[i], a, b, (*fp[i])(a, b));
    }
    return 0;
}

float add(int x, float y)
{
    return x + y;
}

float sub(int x, float y)
{
    return x - y;
}

float mul(int x, float y)
{
    return x * y;
}

float divi(int x, float y)
{
    return x / y;
}
