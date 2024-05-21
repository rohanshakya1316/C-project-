// Check palindrome string using function.
#include<stdio.h>
#include<string.h>
void palindrome(char []);
void main()
{
    char str[100];
    printf("Enter any string:");
    scanf("%s", str);
    palindrome(str);
}
void palindrome(char x[])
{
    char x1[100];
    strcpy(x1, x);
    if (strcmp(strrev(x1), x) == 0)
    {
        printf("The entered string %s is palindrome.", x);
    }
    else
    {
        printf("The entered string %s is not palindrome.", x);
    }
    
}
