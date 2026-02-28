#include<stdio.h>
#include<stdlib.h>

void main()
{
    char x[] = "hello hi";
    printf(" %ld , %ld ", sizeof(*x), sizeof(x));
}

/*
 * What is the output?
 * Ans: 1 , 9
 */
