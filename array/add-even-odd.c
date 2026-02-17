#include<stdio.h>
#define SIZE 5

int main(void)
{
    int even = 0, odd = 0, arr[SIZE];
    printf("Enter elements of array : ");
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
        arr[i]%2 == 0 ? (even = even + arr[i]) : (odd = odd + arr[i]);
    }
    printf("The addition of Odd number is %d, Even number is %d.\n", odd, even);
    return 0;
}
