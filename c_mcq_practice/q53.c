#include<stdio.h>

void display(int);

void main()
{
    display(60);
    display(80);
    display(40);
    display(70);
    display(20);
}

void display(int a)
{
    static int p;
    p++;
    p = 6;
    printf("p value: %d, a value: %d\n", p, a);
}

/*
 * What is the output of the code?
 * Ans:
 *      p value: 6, a value: 80
 *      p value: 6, a value: 40
 *      p value: 6, a value: 70
 *      p value: 6, a value: 20
 *      p value: 6, a value: 60
 */
