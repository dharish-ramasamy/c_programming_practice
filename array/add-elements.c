#include<stdio.h>

int main(void)
{
    int n, sum = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("Sum of elements of array is %d.\n", sum);
    return 0;
}
