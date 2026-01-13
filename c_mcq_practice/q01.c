#include<stdio.h>

int main()
{
    int x;
    for( x = -1; x <= 10; x++)
    {
        if( x < 5 )
            continue;
        else
            break;
        printf("abc"); 
    }
    return 0;
}

/*
 *How many times "abc" will be printed?
 *Ans: 0 times
*/
