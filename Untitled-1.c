#include <stdio.h>

int main() {
    char name[50];
    char className[20];
    int rollNo;
    char address[100];
    char dob[12];

    // Input student information
    printf("Enter student's name: ");
    gets(name);
    printf("Enter class name: ");
    scanf("%s", className);
    printf("Enter address: ");
    scanf("%s", address);
    printf("Enter date of birth (DD/MM/YYYY): ");
    scanf("%s", dob);
    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Class: %s\n", className);
    printf("Roll Number: %d\n", rollNo);
    printf("Address: %s\n", address);
    printf("Date of Birth: %s\n", dob);

    return 0;
}
