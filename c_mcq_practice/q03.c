#include<stdio.h>

int main()
{
    int a=500, b=100, c;
    if(!a>=400)
        b=300;
    c=200;
    printf("b=%d c=%d\n", b, c);
    return 0;
}

/*
 * What is the output?
 * Ans: b=100 c=200
 */
