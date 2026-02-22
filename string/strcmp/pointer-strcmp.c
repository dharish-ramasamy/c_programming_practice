#include<stdio.h>

int pointer_strcmp(char *, char *);

int main(void)
{
    char str1[20], str2[20];
    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);
    if((pointer_strcmp(str1, str2)) == 0)
    {
        printf("Strings are same.\n");
    }
    else
    {
        printf("Strings are not same.\n");
    }
    return 0;
}

int pointer_strcmp(char *p1, char *p2)
{
    while(*p1 == *p2)
    {
        if(*p1 == '\0')
        {
            return 0;
        }
        p1++, p2++;
    }
    return (*p1 - *p2);
}
