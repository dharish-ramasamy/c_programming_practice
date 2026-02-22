#include<stdio.h>

int main(void)
{
    char str[] = "India";
    char *ptr;
    ptr = str;
    while(*ptr != '\0')
    {
        printf("Character : %c\t", *ptr);
        printf("Address : %p\n", ptr);
        ptr++;
    }
    return 0;
}
