#include<stdio.h>
#include<string.h>

void main()
{
    char a[] = "Hello World";
    char *p;
    p = a;
    printf(" %ld %ld %ld %ld ", sizeof(a), sizeof(p), strlen(a), strlen(p));
}

/*
 *What is the output?
 *Ans: 12 8 11 11
 */
