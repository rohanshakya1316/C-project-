// Sort a list of names of five students in ascending order using the concept of pointer.
#include<stdio.h>
#include<string.h>
#define STUDENT 5
#define LENGTH 30
void main()
{
    char name[STUDENT][LENGTH]; 
    char temp[LENGTH];
    for (int i = 0; i < STUDENT; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", (name + i));
    }
    for (int i = 0; i < STUDENT - 1; i++)
    {
        for (int j = i + 1; j < STUDENT; j++)
        {
            if (strcmpi(*(name + i), *(name + j)) > 0) // strcmpi() = case insensitive
            {
                strcpy(temp, *(name + i));
                strcpy(*(name + i), *(name + j));
                strcpy(*(name + j), temp);
            }
        }
    }
    printf("Names after sorting alphabetically in ascending order:\n");
    for (int i = 0; i < STUDENT; i++)
    {
        printf("%s\n", *(name + i));
    }
}

// NOT EXEUTING WELL
// #include<stdio.h>
// #include<string.h>
// #define STUDENT 5
// #define LENGTH 30
// void sort(char (*)[5]);
// void main()
// {
//     char name[STUDENT][LENGTH]; 
    
//     for (int i = 0; i < STUDENT; i++)
//     {
//         printf("Enter name of student %d: ", i + 1);
//         scanf("%s", (name + i));
//     }
//     sort(name);
// }
// void sort(char (*name)[5])
// {
//     char temp[LENGTH];
//     for (int i = 0; i < STUDENT - 1; i++)
//     {
//         for (int j = i + 1; j < STUDENT; j++)
//         {
//             if (strcmpi(*(name + i), *(name + j)) > 0) // strcmpi() = case insensitive
//             {
//                 strcpy(temp, *(name + i));
//                 strcpy(*(name + i), *(name + j));
//                 strcpy(*(name + j), temp);
//             }
//         }
//     }
//     printf("Names after sorting alphabetically in ascending order:\n");
//     for (int i = 0; i < STUDENT; i++)
//     {
//         printf("%s\n", *((name) + i));
//     }
// }