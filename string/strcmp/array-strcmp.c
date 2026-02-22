#include<stdio.h>

int array_strcmp(char *, char *);

int main(void)
{
    char str1[20], str2[20];
    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);
    if((array_strcmp(str1, str2)) == 0)
    {
        printf("Strings are same.\n");
    }
    else
    {
        printf("Strings are not same.\n");
    }
    return 0;
}

int array_strcmp(char a1[], char a2[])
{
    int i = 0;
    while(a1[i] == a2[i])
    {
        if(a1[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return (a1[i] - a2[i]);
}
