#include<stdio.h>

void displayMenu();

int main(void)
{
    int choice;
    displayMenu();
    printf("Enter your choice : ");
    scanf("%d", &choice);
    return 0;
}


void displayMenu()
{
    printf("1. Create database\n");
    printf("2. Insert new record\n");
    printf("3. Modify a record\n");
    printf("4. Delete a record\n");
    printf("5. Display all record\n");
    printf("Exit\n");
}
