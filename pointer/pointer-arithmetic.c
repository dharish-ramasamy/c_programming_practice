#include<stdio.h>

int main(void)
{
    int a = 5, *pi = &a;
    char b = 'x', *pc = &b;
    float c = 5.5, *pf = &c;

    printf("Value of pi = Address of a = %p\n", pi);
    printf("Value of pc = Address of b = %p\n", pc);
    printf("Value of pf = Address of c = %p\n", pf);

    pi++;
    pc++;
    pf++;

    printf("Now value of pi = Address of a = %p\n", pi);
    printf("Now value of pc = Address of b = %p\n", pc);
    printf("Now value of pf = Address of c = %p\n", pf);
    
    return 0;
}
