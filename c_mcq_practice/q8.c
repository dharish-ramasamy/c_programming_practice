#include<stdio.h>

void main()
{
    int a = b = c = 10;
    a = b = c = 50;
    printf("%d %d %d", a, b, c);
}

/*
 *What is the output?
 *Ans: Compile time error
 */
