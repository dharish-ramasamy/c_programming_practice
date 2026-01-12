#include<stdio.h>

int main()
{
    int x = 3;
    float y = 3.0;
    if(x == y)
        printf("x and y are equal");
    else
        printf("x and y are not equal");
    return 0;
}

/*
 *What is the output?
 *Ans: x and y are equal (implicit conversion of type) 
 */
