#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int rollno;
    float mark;
};

void display(struct student *);
struct student *func(struct student *, struct student *);

int main(void)
{
    struct student stu1 = {"Krish", 35, 88.41};
    struct student stu2, *sptr;
    printf("Enter name, rollno and mark for stu2 : ");
    scanf("%s %d %f", stu2.name, &stu2.rollno, &stu2.mark);
    sptr = func(&stu1, &stu2);
    display(sptr);
    return 0;
}

struct student *func(struct student *s1, struct student *s2)
{
    return s1->mark > s2->mark ? s1 : s2;
}

void display(struct student *stu)
{
    printf("Name : %s\tRollno : %d\tMark : %.2f\n", stu->name, stu->rollno, stu->mark);
}
