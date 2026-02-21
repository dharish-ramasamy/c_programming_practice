#include<stdio.h>

int main(void)
{
    int array[2][3][2] = {
        {
            {5, 10},
            {6, 11},
            {7, 12}
        },
        {
            {20, 30},
            {21, 31},
            {22, 32}
        }
    };

    printf("[");
    for(int i = 0; i < 2; i++)
    {
        printf("[");
        for(int j = 0; j < 3; j++)
        {
            printf("[");
            for(int k = 0; k < 2; k++)
            {
                printf(" %d", *(*(*(array+i)+j)+k));
            }
            printf("] ");
        }
        printf("]");
    }
    printf("]\n");

    return 0;
}
