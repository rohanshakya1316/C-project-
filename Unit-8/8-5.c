// Show the concept of passing array of structure to function.
#include<stdio.h>
#include<stdlib.h>
struct array_info
{
    char name[30];
    int age;
    char address[30];

};
// Function Prototype for Passing array of structure
void display_info(int, struct array_info []);
void main()
{ 
    int n;
    printf("How many students are there?\n");
    scanf("%d", &n);
    struct array_info stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("Information of student %d:\n", i + 1);
        fflush(stdin);
        printf("Enter name: ");
        gets(stu[i].name);
        printf("Enter age: ");
        scanf("%d", &stu[i].age);
        fflush(stdin);
        printf("Enter address: ");
        gets(stu[i].address);
        printf("\n");
    }
    display_info(n, stu);
}

void display_info(int size, struct array_info s1[])
{
    printf("Displaying output from the function: \n");
    
    for (int i = 0; i < size; i++)
    {
        printf("Info of student %d:\n", i + 1);
        printf("Name: %s\t", s1[i].name);
        printf("Age: %d \t", s1[i].age);
        printf("Address: %s \t", s1[i].address);
        printf("\n\n");
    }
}