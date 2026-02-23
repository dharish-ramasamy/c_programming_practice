#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    float mark;
};

int main(void)
{
    struct student stu_array[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter name, rollno, and mark : ");
        scanf("%s %d %f", stu_array[i].name, &stu_array[i].rollno, &stu_array[i].mark);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Name : %s\tRollno : %d\tMark : %.2f\n", stu_array[i].name, stu_array[i].rollno, stu_array[i].mark);
    }
    return 0;
}
