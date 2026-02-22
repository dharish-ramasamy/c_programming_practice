#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int rollno;
    float mark;
};

int main(void)
{
    struct student stu1 = {"Krish", 35, 88.41};
    struct student stu2, stu3;
    strcpy(stu2.name, "John");
    stu2.rollno = 34;
    stu3.mark = 83.645;
    printf("Enter name, rollno and mark for stu3 : ");
    scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.mark);
    printf("stu1 : %s %d %.2f\n", stu1.name, stu1.rollno, stu1.mark);
    printf("stu2 : %s %d %.2f\n", stu2.name, stu2.rollno, stu2.mark);
    printf("stu3 : %s %d %.2f\n", stu3.name, stu3.rollno, stu3.mark);
    return 0;
}
