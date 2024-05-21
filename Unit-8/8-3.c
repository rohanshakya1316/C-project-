// Show the concept of nested structure.
#include<stdio.h>
#include<stdlib.h>
struct book
    {
        char name[50];
        int pages;
        float price;
    };
    struct author
    {
        char author_name[50];
        struct book knowledge;  // Nested Structure
    };
void main()
{
    struct author writer;
    printf("Enter the author name: ");
    gets(writer.author_name);
    fflush(stdin); // to flush output buffer of the stream
    printf("Enter the name of the book: ");
    gets(writer.knowledge.name);
    fflush(stdin);
    printf("Enter the total pages in the book: ");
    scanf("%d", &writer.knowledge.pages);
    printf("Enter the price of the book: ");
    scanf("%f", &writer.knowledge.price);

    printf("\n \n");

    printf("CONTENTS: \n");
    printf("Author's name: %s \n", writer.author_name);
    printf("Book's name: %s \n", writer.knowledge.name);
    printf("Total pages in the book: %d \n", writer.knowledge.pages);
    printf("Total price of book: %f \n", writer.knowledge.price);
}