#include<stdio.h>

void main()
{
    int a = 5, b = 6, c = 9, d;
    d = a > b ? (a > c ? 1 : 2) : (c > b ? 6 : 8);
    printf(" %d ", d);
}

/*
 * What is the output?
 * Ans: 6 
 */
