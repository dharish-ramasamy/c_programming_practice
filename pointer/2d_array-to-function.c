#include<stdio.h>

void func(int (*a)[4]);

int main(void)
{
    int array[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };

    printf("Inside main(): [");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf(" %d", array[i][j]);
        }
    }
    printf(" ]\n");
    
    func(array);

    printf("Inside main() after func(): [");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf(" %d", array[i][j]);
        }
    }
    printf(" ]\n");
}

void func(int (*a)[4])
{
    printf("Inside func(): [");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            a[i][j] = a[i][j] + 2;
            printf(" %d", a[i][j]);
        }
    }
    printf(" ]\n");
}
