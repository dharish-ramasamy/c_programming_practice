#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int rollno;
    float mark;
};

void display(struct student);

int main(void)
{
    struct student stu1 = {"Krish", 35, 88.41};
    struct student stu2, stu3;
    strcpy(stu2.name, "John");
    stu2.rollno = 34;
    stu2.mark = 83.645;
    printf("Enter name, rollno and mark for stu3 : ");
    scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.mark);
    display(stu1);
    display(stu2);
    display(stu3);
    return 0;
}

void display(struct student stu)
{
    printf("Name : %s\tRollno : %d\tMark : %.2f\n", stu.name, stu.rollno, stu.mark);
}
