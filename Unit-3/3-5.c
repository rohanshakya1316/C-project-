// Input a character and check whether it is uppercase or lowercase.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("The entered character '%c' is in uppercase.", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("The entered character '%c' is in lowercase.", ch);
    else
        printf("The entered character '%c' is not a letter.", ch);
}