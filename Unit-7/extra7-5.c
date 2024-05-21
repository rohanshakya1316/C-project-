// Sort a list of names of five students in ascending order using the concept of pointer.
// Not working
#include<stdio.h>
#include<string.h>
#define STUDENT 5
#define LENGTH 30
void main()
{
    char name[STUDENT][LENGTH]; 
    char temp[LENGTH];
    char *arr_name = name[0]; // OR name[0] only.
    for (int i = 0; i < STUDENT; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", (arr_name + i));
    }
    for (int i = 0; i < STUDENT - 1; i++)
    {
        for (int j = i + 1; j < STUDENT; j++)
        {
            if (strcmp(*(arr_name + i), *(arr_name + j)) > 0)
            {
                strcpy(temp, *(arr_name + i));
                strcpy(*(arr_name + i), *(arr_name + j));
                strcpy(*(arr_name + j), temp);
            }
        }
    }
    printf("Names after sorting alphabetically in ascending order:\n");
    for (int i = 0; i < STUDENT; i++)
    {
        printf("%s\n", (arr_name + i));
    }
}
