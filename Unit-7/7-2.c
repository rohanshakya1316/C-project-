// Reverse a string using pointer.
#include<stdio.h>
#define N 100
void Reverse(char *);
void main()
{
    char string[N];
    printf("Enter any string to reverse:");
    gets(string);
    Reverse(string);
    printf("After reverse: %s", string);
}
void Reverse(char *str)
{
    int length = 0;
    while (*(str + length) != '\0') // adding length to preserve base address.
    {
        length ++;
    }
    char *i = str;
    char *j = str + length - 1; // -1 to exclude the null character.
    char temp;
    while (i < j)
    {
        temp = *i; // Swapping the characters.
        *i = *j;
        *j = temp;
        i ++;
        j --;
    }
}

// MY LOGIC
// #include<stdio.h>
// #define N 100
// void Reverse(char *, char *);
// void main()
// {
//     char str1[N], str2[N];
//     printf("Enter any string to reverse:");
//     gets(str1);
//     Reverse(str1, str2);
//     printf("After reverse: %s\n", str2);
// }
// void Reverse(char*s1, char *s2)
// {
//     while(*s1 != '\0') 
//     {
//         s1++; // it is done to place address of s1 at null character.
//     }
//     --s1; // decrementing by 1 i.e., last character of string.
//     while(*s1 != '\0')
//     {
//         *s2 = *s1;  // s1 and s2 hold only addresses of str1, str2;
//         s1--;
//         s2++;
//     }
//    *s2 = '\0'; 

// }
