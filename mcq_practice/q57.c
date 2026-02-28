#include<stdio.h>

void main()
{
    int a[] = {6, 2, 8, 4, 9}, *p, n;
    p = a + 2;
    n = *p;
    printf("1 => %d \n", n);
    n = *++p;
    printf("2 => %d \n", n);
    n = *(--p);
    printf("3 => %d \n", n);
    n = *p--;
    printf("4 => %d \n", n);
    n = (*p)++;
    printf("5 => %d \n", n);
    n = ++(*p);
    printf("6 => %d \n", n);
    n = --*p;
    printf("7 => %d \n", n);
    n = *(++p);
    printf("8 => %d \n", n);
}
/*
 * What is the output of the code?
 * Ans: 1 => 8
 *      2 => 4 
 *      3 => 8 
 *      4 => 8 
 *      5 => 2 
 *      6 => 4 
 *      7 => 3 
 *      8 => 8 
 */
