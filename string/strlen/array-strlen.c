#include<stdio.h>

unsigned int array_strlen(char *);

int main(void)
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    unsigned int length = array_strlen(str);
    printf("Length of the string is : %u\n", length);
    return 0;
}

unsigned int array_strlen(char a[])
{
    unsigned int count = 0;
    while(a[count] != '\0')
    {
        count++;
    }
    return count;
}
