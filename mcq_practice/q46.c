#include<stdio.h>

void main()
{
    int a = 2;
    switch(a)
    {
        case 1:
            printf("goodbye");
            break;
        case 2:
            continue;
        case 3:
            printf("bye");
    }
}

/*
 * What is the output?
 * Ans: error
 */
