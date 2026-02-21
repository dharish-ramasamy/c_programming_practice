#include<stdio.h>

int main(void)
{
    float arr[5] = {1.2, 2.5, 3.6, 4.7, 5.4};
    void *vp = arr;
    printf("[");
    for(int i = 0; i < 5; i++)
    {
        printf(" %.1f\t", *(float *)vp);
        vp = (float *)vp + 1;
    }
    printf(" ]\n");

    return 0;
}
