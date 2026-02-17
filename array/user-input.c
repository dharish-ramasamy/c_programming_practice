#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array are : ");
    for(int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return 0;
}
