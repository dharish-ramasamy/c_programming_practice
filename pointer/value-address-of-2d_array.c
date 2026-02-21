#include<stdio.h>

int main(void)
{
    int array[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("Address of %dth array = %p %p\n", i, array[i], (array+i));
        for(int j = 0; j < 4; j++)
        {
            printf("%d %d ", array[i][j], *(*(array+i)+j));
        }
        printf("\n");
    }
    return 0;
}
