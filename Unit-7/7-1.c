//Concatenate two strings using user defined function.
#include<stdio.h>
#define N 100
void concatenate(char *, char *);
void main()
{
    char str1[N], str2[N];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    concatenate(str1, str2);
    printf("After concatenation: %s\n", str1);
}
void concatenate(char *s1, char *s2)
{
    while(*s1 != '\0') 
    {
        s1++;
    }
    while(*s2 != '\0')
    {
        *s1 = *s2;  // s1 and s2 hold only addresses of str1, str2;
        s1++;
        s2++;
    }
   *s1 = '\0'; 
}




// #include <stdio.h>

// // Function to concatenate two strings
// void concatenateStrings(char *str1, char *str2) {
//     // Move the pointer to the end of the first string
//     while (*str1 != '\0') {
//         str1++;
//     }

//     // Copy characters from the second string to the end of the first string
//     while (*str2 != '\0') {
//         *str1 = *str2;
//         str1++;
//         str2++;
//     }

//     // Add null terminator to the concatenated string
//     *str1 = '\0';
// }

// int main() {
//     char string1[100], string2[50];

//     // Input first string
//     printf("Enter the first string: ");
//     scanf("%s", string1);

//     // Input second string
//     printf("Enter the second string: ");
//     scanf("%s", string2);

//     // Concatenate strings using the function
//     concatenateStrings(string1, string2);

//     // Display the concatenated string
//     printf("Concatenated string: %s\n", string1);

//     return 0;
// }

