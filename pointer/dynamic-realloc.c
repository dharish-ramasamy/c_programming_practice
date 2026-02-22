#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not available..\n");
        exit(1);
    }
    printf("Enter integer: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", ptr+i);
    }
    printf("Entered value:");
    for(int i = 0; i < 5; i++)
    {
        printf(" %d", *(ptr+i));
    }
    
    //allocate memory for 4 more integers
    ptr = (int *)realloc(ptr, 9*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory not available..\n");
        exit(1);
    }
    printf("\nEnter integer: ");
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", ptr+i);
    }
    printf("Entered value:");
    for(int i = 0; i < 9; i++)
    {
        printf(" %d", *(ptr+i));
    }
    printf("\n");
    return 0;
}
