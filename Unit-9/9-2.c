// Read a data file and count how many alphabets, spaces and words are there in a file.
#include<stdio.h>
#include<stdlib.h>
#define N 100
void fileread();
void main()
{
   fileread(); 
}

void fileread()
{
    char ch;
    int alps = 0, space = 0;
    FILE *fptr;
    char file_name[N];
    printf("Enter the name of file to be opened:\n");
    gets(file_name);
    fptr = fopen(file_name, "r");
    if (fptr == NULL)
    {
        printf("Error reading the file or doesnot exist.\n");
        exit(1);
    }
    while (!feof(fptr))
    {
        ch = fgetc(fptr);
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            space ++;
        }
        else if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
        {
            alps ++;
        }
    }
    printf("The number of alphabets are %d.\n", alps);
    printf("The number of spaces are %d.\n", space);
    printf("The number of words are %d.", space + 1); // worda are one more than the space.
    fclose(fptr);
}


// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     FILE *file;
//     char filename[100];
//     char ch;
//     int alphabets = 0, spaces = 0, words = 0, inWord = 0;

//     // Get the file name from the user
//     printf("Enter the name of the file: ");
//     scanf("%s", filename);

//     // Open the file
//     file = fopen(filename, "r");

//     // Check if the file is successfully opened
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Return an error code
//     }

//     // Read characters from the file until the end is reached
//     while ((ch = fgetc(file)) != EOF) {
//         if (isalpha(ch)) {
//             alphabets++;
//         } else if (isspace(ch)) {
//             spaces++;
//             inWord = 0;
//         } else {
//             inWord = 1;
//         }

//         // Check for the beginning of a new word
//         if (inWord && isspace(ch)) {
//             words++;
//         }
//     }

//     // Close the file
//     fclose(file);

//     // Display the results
//     printf("Alphabets: %d\n", alphabets);
//     printf("Spaces: %d\n", spaces);
//     printf("Words: %d\n", words);

//     return 0;
// }


// #include <stdio.h>

// int isAlphabet(char ch) {
//     return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
// }

// int main() {
//     FILE *file;
//     char filename[100];
//     char ch;
//     int alphabetCount = 0, spaceCount = 0, wordCount = 0, inWord = 0;

//     // Get the file name from the user
//     printf("Enter the filename: ");
//     scanf("%s", filename);

//     // Open the file
//     file = fopen(filename, "r");

//     // Check if the file exists
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     // Read the file character by character
//     while ((ch = fgetc(file)) != EOF) {
//         // Count alphabets
//         if (isAlphabet(ch)) {
//             alphabetCount++;
//         }
//         // Count spaces
//         else if (ch == ' ' || ch == '\t' || ch == '\n') {
//             spaceCount++;
//             inWord = 0; // Reset inWord flag when a space is encountered
//         }
//         // Count words
//         else {
//             // Check if entering a new word
//             if (!inWord) {
//                 inWord = 1;
//                 wordCount++;
//             }
//         }
//     }

//     // Close the file
//     fclose(file);

//     // Display the counts
//     printf("Alphabets: %d\n", alphabetCount);
//     printf("Spaces   : %d\n", spaceCount);
//     printf("Words    : %d\n", wordCount);

//     return 0;
// }
