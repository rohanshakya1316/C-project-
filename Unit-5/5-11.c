// Display your name ten times using recursive function.
#include<stdio.h>
#define size 100
int display(int, char *);
void main()
{
    char name[size];
    int times = 0;
    printf("Enter your name:");
    gets(name);
    display(times, name);
}
int display(int n, char *str)
{
    if (n == 10)
    {
        return 0;
    }
    else
    {
        printf("%s\n", str);
        display(n + 1, str);
    }  
}