#include<stdio.h>

void fun1(char*, float);
void func(char*, void (*fp)(char*, float));

int main(void)
{
    printf("\nFunction main() called..\n");
    void (*ptr)(char *, float);
    ptr = fun1;
    func("Hello from main()", ptr);
    return 0;
}

void func(char arr[], void(*fp)(char*, float))
{
    printf("\nFunction func() called..\n");
    printf("%s\n", arr);
    (*fp)("Hello form func()", 8.5);
}

void fun1(char a[], float f)
{
    printf("\nFunction fun1() called..\n");
    printf("%s\n", a);
    printf("Value: %f\n", f);
}
