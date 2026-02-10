#include<stdio.h>

void func(void)
{
    int x = 0;
    static int y = 0;
    x++, y++;
    printf("%d %d\n", x, y);
}

int main(void)
{
    func();
    func();
    return 0;
}

/*
 * What is the output?
 * Ans: 
 *      1 1
 *      1 2
 */
