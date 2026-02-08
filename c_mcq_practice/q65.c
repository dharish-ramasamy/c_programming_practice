#include<stdio.h>

void main()
{
    int i = 3;
    printf("%d %d %d %d", --i, i, i--, i++);
}

/*
 * What is the output?
 * Ans:
 *      This program has UNDEFINED BEHAVIOR in C.
 *      There is no guaranteed output. 
 *      If a variable is modified more than once between sequence points, the behavior is undefined.
 *      And C does not define the order in which function arguments are evaluated.
 *      So the compiler is free to evaluate:
 *                         - Left to right
 *                         - Right to left
 *                         - Any order
 *      Different compilers → different outputs.
 */
