// Enter names of 10 students and display whether the name is in the list or not.
#include<stdio.h>
#include<string.h>
#define N 100
void main()
{
    char name[10][N];
    char search_name[N];
    int i, flag = 0, list;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name[i]);
    }
    printf("Enter the name to be searched: ");
    scanf("%s", search_name);
    for (i = 0; i < 10; i++)
    {
        if (strcmp(name[i], search_name) == 0)
        {
            flag = 1;
            list = i;
            break;
        } 
    }
    if (i == 10)
    {
        flag = 0;  
    }
    if (flag == 1)
        printf("The entered name %s is found in list number %d.", search_name, list + 1);
    else
        printf("The entered name %s is not found in list.", search_name);   
}
