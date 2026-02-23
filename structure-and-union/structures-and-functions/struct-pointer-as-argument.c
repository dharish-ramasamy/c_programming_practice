#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int rollno;
    float mark;
};

void display(struct student *);
void inc_mark(struct student *);

int main(void)
{
    struct student stu1 = {"Krish", 35, 88.41};
    struct student stu2, stu3;
    strcpy(stu2.name, "John");
    stu2.rollno = 34;
    stu2.mark = 83.645;
    printf("Enter name, rollno and mark for stu3 : ");
    scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.mark);
    inc_mark(&stu1);
    inc_mark(&stu2);
    inc_mark(&stu3);
    display(&stu1);
    display(&stu2);
    display(&stu3);
    return 0;
}

void inc_mark(struct student *sptr)
{
    (*sptr).mark++;
}

void display(struct student *sptr)
{
    printf("Name : %s\tRollno : %d\tMark : %.2f\n", sptr->name, sptr->rollno, sptr->mark);
}
