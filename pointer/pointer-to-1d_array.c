#include<stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    for(int i = 0; i < 5; i++)
    {
        printf("%p %p\t", arr+i, p+i);                  
        printf("%p %p\t", &(arr[i]), &(p[i]));         
        printf("%p %p\t", &(*(arr+i)), &(*(p+i)));
        printf("%d %d\t", arr[i], p[i]);
        printf("%d %d\t", *(arr+i), *(p+i));
        printf("%d %d\n", *(&(arr[i])), *(&(p[i])));
    }
    return 0;
}
