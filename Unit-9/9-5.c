// Write the name, age and basic salary of employees into a file till user do not want and also display 
// the total number of employees whose salary is in between 10000 and 50000 from the file. 
// #include<stdio.h>
// #include<stdlib.h>
// #define MAX_LEN 50
// void main()
// {
//     char choice;
//     char name[MAX_LEN];
//     int age;
//     float sal;
//     FILE *fptr;
//     fptr = fopen("employee_info.txt", "w");
//     if (fptr == NULL)
//     {
//         printf("Error opening the file.");
//         exit(1);
//     }
//     do
//     {
//         fflush(stdin);
//         printf("Enter the name of employee: ");
//         gets(name);
//         printf("Enter the age: ");
//         scanf("%d", &age);
//         printf("Enter the salary: ");
//         scanf("%f", &sal);
//         fprintf(fptr,"%s, %d, %f\n", name, age, sal);
//         fflush(stdin);
//         printf("Do you want to continue (y/n): ");
//         scanf("%c", &choice);
//     } while (choice == 'Y' || choice == 'y');
//     fclose(fptr);
//     fptr = fopen("employee_info.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("Error opening the file.");
//         exit(1);
//     }
//     int emp_no = 0;
//     printf("Employees with salary between 10000 and 50000 are as follows:\n");
//     printf("Name\t\t Age\t\t Salary\n");
//     while(fscanf(fptr, "%s %d %f", name, &age, &sal) != EOF)
//     {
//         if (sal >= 10000 && sal <= 50000)
//         {
//             printf("%s\t\t %d\t\t %f\n", name, age, sal);
//             emp_no ++;
//         }
//     }
//     fclose(fptr);
//     printf("Total number is %d.", emp_no);
    
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *file;
//     char choice;
//     char name[50];
//     int age;
//     float salary;

//     // Open file in write mode
//     file = fopen("employees.txt", "w");

//     if (file == NULL) {
//         printf("Error opening file!\n");
//         exit(1);
//     }

//     // Write employee information to file
//     do {
//         printf("Enter employee name: ");
//         scanf("%s", name);

//         printf("Enter employee age: ");
//         scanf("%d", &age);

//         printf("Enter employee basic salary: ");
//         scanf("%f", &salary);

//         fprintf(file, "%s %d %.2f\n", name, age, salary);

//         printf("Do you want to enter another employee? (y/n): ");
//         scanf(" %c", &choice);

//     } while (choice == 'y' || choice == 'Y');
//     rewind(file);
//     // Close the file
//     fclose(file);

//     // Open file in read mode
//     file = fopen("employees.txt", "r");

//     if (file == NULL) {
//         printf("Error opening file!\n");
//         exit(1);
//     }

//     // Read file and count employees with salary between 10000 and 50000
//     int totalEmployees = 0;
//     printf("Name\t\t Age\t\t Salary\n");
//     while (fscanf(file, "%s %d %f", name, &age, &salary) != EOF) {
//         if (salary >= 10000 && salary <= 50000) {
//             printf("%s\t\t %d\t\t %f\n");
//             fflush(stdin);
//             totalEmployees++;
//         }
//     }

//     // Display the result
//     printf("Total employees with salary between 10000 and 50000: %d\n", totalEmployees);

//     // Close the file
//     fclose(file);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
struct Employee {
    char name[50];
    int age;
    float basicSalary;
};
struct Employee emp;
void main() 
{
    FILE * file = fopen("employee_data.txt", "w");
    if (file == NULL) 
    {
        printf("Error opening the file for writing.\n");
        exit(1); 
    }
    char choice;
    do 
    {
        printf("Enter employee name: ");
        scanf("%s", emp.name);

        printf("Enter employee age: ");
        scanf("%d", &emp.age);

        printf("Enter employee basic salary: ");
        scanf("%f", &emp.basicSalary);

        fprintf(file, "%s %d %.2f\n", emp.name, emp.age, emp.basicSalary);

        printf("Do you want to enter data for another employee? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    fclose(file);

    file = fopen("employee_data.txt", "r");
    if (file == NULL) 
    {
        fprintf(stderr, "Error opening the file for reading.\n");
        exit(1); 
    }
    int count = 0;
    while (fscanf(file, "%s %d %f", emp.name, &emp.age, &emp.basicSalary)!=EOF) 
    {
        if (emp.basicSalary >= 10000 && emp.basicSalary <= 50000) 
        {
            printf("%s\t%d\t%.2f\n", emp.name, emp.age, emp.basicSalary);
            count++;
        }
    }
    printf("Total employees with salary between 10000 and 50000: %d\n", count);
    fclose(file);
}