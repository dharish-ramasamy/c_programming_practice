#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    float marks[4];
};

int main(void)
{
    struct student stu_array[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Enter name, rollno, and marks for 4 subjects : ");
        scanf("%s %d", stu_array[i].name, &stu_array[i].rollno);
        for(int j = 0; j < 4; j++)
        {
            scanf("%f", &stu_array[i].marks[j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("Name : %s\tRollno : %d\t", stu_array[i].name, stu_array[i].rollno);
        for(int j = 0; j < 4; j++)
        {
            printf("Mark for subject %d : %.2f\t", j+1, stu_array[i].marks[j]);
        }
        printf("\n");
    }
    return 0;
}
