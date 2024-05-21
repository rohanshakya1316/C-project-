// Copy the data of one file to another file and display the content of the destination file.
#include<stdio.h>
#include<stdlib.h>
// typedef struct _iobuf FILE;
void filecopy();
void main()
{
    filecopy();
}
void filecopy()
{
    char ch; 
    char src_file[50], dest_file[50];
    FILE *source, *destination;
    printf("Enter the name of source file: ");
    gets(src_file);
    source = fopen(src_file, "r");
    if (source == NULL)
    {
        printf("Error opening file.");
        exit(1);
    }
    printf("Enter the name of destination file: ");
    gets(dest_file);
    destination = fopen(dest_file, "w+");
    if (destination == NULL)
    {
        printf("Error creating the file.");
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF )
    {
        fputc(ch, destination);
    }
    rewind(destination);
    printf("Successfully copied to the destination file. \n\n");
    printf("Contents of the destination file:\n \n");
    while ((ch = fgetc(destination)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(source);
    fclose(destination);
}