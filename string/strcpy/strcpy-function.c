#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[10], str2[10];
    printf("Enter a string : ");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("Input string : %s\nCopied string : %s\n", str1, str2);
    strcpy(str1, "Chennai");
    strcpy(str2, "Bangalore");
    printf("1st string : %s\n2nd string : %s\n", str1, str2);
    return 0;
}
