#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    float mark;
};

int main(void)
{
    struct student stu;
    struct student *ptr = &stu;
    printf("Enter name, rollno, and mark : ");
    scanf("%s %d %f", ptr->name, &ptr->rollno, &ptr->mark);
    printf("Name : %s\tRollno : %d\tMark : %.2f\n", (*ptr).name, (*ptr).rollno, (*ptr).mark);
    return 0;
}
