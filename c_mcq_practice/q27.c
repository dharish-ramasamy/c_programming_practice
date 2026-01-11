#include<stdio.h>

void main()
{
    static int i;
    int j;
    for(j = 0; j < 10; j++)
    {
        i += 2;
        i -= j;
    }
    printf(" %d ", i);
}

/*
 *What is the output?
 *Ans: -25
 */
