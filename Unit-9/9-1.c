// Enter a sentence in a file and display its contents.
#include<stdio.h>
#include<stdlib.h>
#define N 100
void filewrite();
void main()
{
   filewrite(); 
}

void filewrite()
{
    FILE *fptr;
    char str[N];
    printf("Enter a sentence:\n");
    gets(str);
    fptr = fopen("text.txt", "w");
    if (fptr == NULL)
    {
        printf("Error writing the file.\n");
        exit(1);
    }
    fprintf(fptr, "%s", str);
    fclose(fptr);
    printf("Successfully written in a file.");
}