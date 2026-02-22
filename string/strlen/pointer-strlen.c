#include<stdio.h>

unsigned int pointer_strlen(char *);

int main(void)
{
    char str[40];
    printf("Enter a string: ");
    gets(str);
    unsigned int length = pointer_strlen(str);
    printf("Length of the string is : %u\n", length);
    return 0;
}

unsigned int pointer_strlen(char *ptr)
{
    unsigned int count = 0;
    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}
