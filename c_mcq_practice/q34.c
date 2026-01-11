#include<stdio.h>

void main()
{
    int x = 10;
    int y;
    {
        y = x++;
    }
    printf(" %d %d ", x, y);
}

/*
 *What is the output?
 *Ans: 11 10
 */
