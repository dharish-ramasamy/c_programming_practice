#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, *ptr;
    printf("Enter total number of integers: ");
    scanf("%d", &n);
    
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not available..\n");
        exit(1);
    }
    
    printf("Enter integer: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", ptr+i);
    }

    printf("Entered value:");
    for(int i = 0; i < n; i++)
    {
        printf(" %d", *(ptr+i));
    }
    printf("\n");
    return 0;
}
