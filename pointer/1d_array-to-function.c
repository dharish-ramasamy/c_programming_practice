#include<stdio.h>

void func(int array[]);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("Inside main(): [");
    for(int i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }
    printf(" ]\n");
    
    func(arr);
    
    printf("Inside main() after func(): [");
    for(int i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }
    printf(" ]\n");
    
    return 0;
}

void func(int array[])
{
    printf("Inside func(): [");
    for(int i = 0; i < 5; i++)
    {
        array[i] = array[i] + 2;
        printf(" %d", array[i]);
    }
    printf(" ]\n");
}
