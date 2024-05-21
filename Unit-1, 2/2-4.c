// Input name, class, roll no., address, and date of birth 
//of a student and display all the information.
#include<stdio.h>
void main()
{
    char name[50], address[50], class[10];
    int roll, dd, mm, yy;

    printf("Enter the student's name:");
    scanf("%s", name);
    printf("Enter the student's address:");
    scanf("%s", address);
    printf("Enter the student's class:");
    scanf("%s", class);
    printf("Enter the student's roll number:");
    scanf("%d", &roll);
    printf("Enter date of birth as dd/mm/yyyy:");
    scanf("%d %*c %d %*c %d", &dd, &mm, &yy);
    
    printf("STUDENT'S INFORMATION: \n");
    printf("Name: %s\nDate of Bith: %d - %d - %d\n", name, dd, mm, yy);
    printf("Address: %s\n", address);
    printf("Class: %s\nRoll Number: %d", class, roll);
}