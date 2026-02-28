#include<stdio.h>

void main()
{
    int x, y;
    for(x = 5; x >= 1; x--)
    {
        for(y = 1; y <= x; y++)
            printf(" %d ", y);
    }
}

/*
 *How many times the loop will be executed?
 *Ans: 15 times
 */
