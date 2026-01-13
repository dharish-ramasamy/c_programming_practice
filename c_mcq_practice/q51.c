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
    printf("p value: %d, a value: %d\n", p, a);
}
