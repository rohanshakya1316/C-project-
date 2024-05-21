// Input any ten names and sort it in alphabetical order.
#include<stdio.h>
#include<string.h>
int N = 10;
void main()
{
    char name[100][N], temp[100];
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("Enter name of student %d:", i+1);
        scanf("%s", name[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = i+1 ; j < N; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
            
        }
        
    }
    printf("Names sorted in alphabetical order:\n");
    for (i = 0; i < N; i++)
    {
        printf("%s\n", name[i]);
    }  
}