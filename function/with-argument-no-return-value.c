#include<stdio.h>
#include<math.h>

void type(float, float, float);
void area(float, float, float);

int main(void)
{
    float a, b, c;
    printf("Enter the sides of triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    if(a<b+c && b<a+c && c<a+b)
    {
        type(a, b, c);
        area(a, b, c);
    }
    else
    {
        printf("No triangle possible whith these sides\n");
    }
    return 0;
}

void type(float a, float b, float c)
{
    if((a*a) + (b*b) == (c*c) || (b*b) + (c*c) == (a*a) || (a*a) + (c*c) == (b*b))
    {
        printf("Right angled triangle\n");
    }
    if(a==b && b==c)
    {
        printf("Equivalent triangle\n");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Isosceles triangle\n");
    }
    else
    {
        printf("Scalence triangle\n");
    }
}

void area(float a, float b, float c)
{
    float s, area;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area if triangle = %f\n", area);
}
