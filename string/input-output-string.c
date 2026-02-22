#include<stdio.h>

int main(void)
{
    //scanf() and printf() functions for inuput and output
    char name[40];
    printf("Enter a name: ");
    scanf("%s", name); // stops reading as soon as it encounters a whitespace
    printf("Name : %s\n", name); // display the character until it encounters the character '\0'

    // Clear leftover newline from input buffer
    getchar();

    //gets() and puts() functions for input and output
    printf("Enter a name: ");
    gets(name); // reads until encountering a newline and replaces the newline('\n') by null character('\0')
    printf("Name : ");
    puts(name); //display the character and replaces the null character('\0') by newline('\0')

    return 0;
}
