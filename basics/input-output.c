#include<stdio.h>
#include<limits.h>

#define MSG "hello\n"

int main()
{
    printf(MSG); //symbolic constant

    printf("Indian\b \n"); // '\b' - moves cursor one position back
    printf("New\rDelhi\n"); // '\r' - moves cursor to beginning of line

    int a = 11;
    printf("a = %d\t", a);
    printf("a = %o\t", a); // int to octal(0 to 7)
    printf("a = %x\t", a); // int to hexadecimal(0 to f)
    printf("a = %X\t", a); // int to hexadecimal(0 to F)

    int n = 4000000000; // signed int range -2,147,483,648 to 2,147,483,647
    unsigned int m = 4000000000; // unsigned int range 0 to 4,294,967,295
    printf("n = %d, m = %u\n", n, m);
    printf("n = %d, m = %u\n", INT_MAX, UINT_MAX);

    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("%d\n", ch); // char to int (ASCII)

    // format for floating point output
    float b = 123.1265;
    printf("%f\t", b); // by default 6 floating points
    printf("%.2f\t", b); // only 2 digits allowed after decimal point
    printf("%.3f\n", b); // only 3 digits allowed after decimal point

    // format for integer output
    int x = 625, y = 2394, z = 12345;
    printf("%5d, %5d, %5d\n", x, y, z);
    printf("%3d, %4d, %5d\n", x, y, z);

    int l = 98;
    char c = 'c';
    printf("%c, %d\n", l, c); // type conversion int to char and char to int (ASCII)

    // format for floating point output
    float a1, b1, a2, b2, a3, b3;
    a1 = 2;
    b1 = 6.8;
    a2 = 4.2;
    b2 = 3.57;
    a3 = 9.82;
    b3 = 85.673;
    printf("%3.1f, %4.2f\n", a1, b1);
    printf("%5.1f, %6.2f\n", a2, b2);
    printf("%7.1f, %8.2f\n", a3, b3);

    // format for string output
    printf("%10s\n", "India");
    printf("%4s\n", "India");
    printf("%.2s\n", "India");
    printf("%5.2s\n", "India");
    return 0;
}
