#include<stdio.h>

void array_strcpy(char *, char *);

int main(void)
{
    char str1[20], str2[20];
    printf("Enter a string : ");
    scanf("%s", str1);
    array_strcpy(str2, str1);
    printf("Input string : %s\nCopied string : %s\n", str1, str2);
    array_strcpy(str1, "Chennai");
    array_strcpy(str2, "Bangalore");
    printf("1st string : %s\n2nd string : %s\n", str1, str2);
    return 0;
}

void array_strcpy(char a1[], char a2[])
{
    int i = 0;
    while(a1[i] = a2[i])
    {
        i++;
        if(a2[i] == '\0')
        {
            a1[i] = a2[i];
            break;
        }
    }
}
