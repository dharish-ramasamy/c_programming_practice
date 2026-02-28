#include<stdio.h>

int main()
{
    unsigned int i = 65535; //Assume 2 byte integer
    while(i++ != 0)
    {
        printf("%d", ++i);
    }
    printf("\n");
    return 0;
}

/*
 *What is the output?
 *Ans: Infinite loop
 */
