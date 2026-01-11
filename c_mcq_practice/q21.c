#include<stdio.h>

typedef union test
{
    int x;
    char y;
    float z;
}Union;

void main()
{
    printf(" %ld ",sizeof(Union));
}

/*
 *What is the output?
 *Ans: 4
 */
