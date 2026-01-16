#include<stdio.h>
#define N 5

void main()
{
    int a[N], *p, i;
    float b[N], *q;
    for(i = 0; i < N; i++)
    {
        a[i] = 1;
        b[i] = .3;
    }
    p = &a[3];
    q = &b[3];
    *p = 5;
    *(p-1) = 7;
    *(p+1) = 9;
    *q = .2;
    *(q-1) = .4;
    *(q+1) = .6;
    for(i = 0; i < N; i++)
    {
        printf(" %d , %.2f \n", a[i], b[i]);
    }
}

/*
 * What is the output of the code?
 * Ans: 1 , 0.30
 *      1 , 0.30
 *      7 , 0.40
 *      5 , 0.20
 *      9 , 0.60
 */
