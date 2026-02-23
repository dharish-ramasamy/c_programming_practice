#include<stdio.h>
#include<string.h>

struct day{
    int date;
    int month;
    int year;
};

struct student{
    char name[20];
    int rollno;
    float mark;
    struct day dob;
};

int main(void)
{
    struct student stu1 = {"Krish", 35, 88.41, {20,10,2002}};
    struct student stu2, stu3;
    strcpy(stu2.name, "John");
    stu2.rollno = 34;
    stu2.mark = 83.645;
    stu2.dob.date = 20;
    stu2.dob.month = 11;
    stu2.dob.year = 2001;
    printf("Enter name, rollno, mark, and DOB for stu3 : ");
    scanf("%s %d %f %d-%d-%d", stu3.name, &stu3.rollno, &stu3.mark, &stu3.dob.date, &stu3.dob.month, &stu3.dob.year);
    printf("stu1 : Name : %s\tRollno : %d\tMark : %.2f\tDOB : %d-%d-%d\n", stu1.name, stu1.rollno, stu1.mark, stu1.dob.date, stu1.dob.month, stu1.dob.year);
    printf("stu2 : Name : %s\tRollno : %d\tMark : %.2f\tDOB : %d-%d-%d\n", stu2.name, stu2.rollno, stu2.mark, stu2.dob.date, stu2.dob.month, stu2.dob.year);
    printf("stu3 : Name : %s\tRollno : %d\tMark : %.2f\tDOB : %d-%d-%d\n", stu3.name, stu3.rollno, stu3.mark, stu3.dob.date, stu3.dob.month, stu3.dob.year);
    return 0;
}
