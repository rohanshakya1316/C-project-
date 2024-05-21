// Create structure student and enter data for five students having name, roll no, and marks as its members. 
// Display the record of the student having the highest mark.
#include<stdio.h>
#define N 5
struct student
{
    char name[50]; 
    int roll;
    float marks;
};
    
void main()
{
    int i, j;
    float highest;
    struct student stu[N]; 
    for (i = 0; i < N; i++)
    {
    printf("Enter the name of the student %d:", i + 1);
    scanf("%s", stu[i].name);
    printf("Enter the roll number of the student %d:", i + 1);
    scanf("%d", &stu[i].roll);
    printf("Enter the marks obtained by the student %d:", i + 1);
    scanf("%f", &stu[i].marks);
    printf("\n");
    }
    highest = stu[0].marks;
    for(i = 0; i < N; i++)
    {
        if (highest < stu[i].marks)
        {
            highest = stu[i].marks;
            j = i;
            break;
        }
    }
    printf("INFORMATION OF student with highest marks:\n");
    printf("The name of student is %s. \n", stu[j].name);
    printf("The roll number of student is %d.\n", stu[j].roll);
    printf("The marks of the student is %f. \n", stu[j].marks);
}