// Create a structure book having ID, name, price as its members. 
// Create one variable of type book and display its content.
#include<stdio.h>
#include<string.h>
struct stock
{
    char name[50]; 
    int id;
    float price;
};
    
void main()
{
    char title[50];
    struct stock commodity; 
    printf("Enter the name of the stock:");
    gets(title);
    strcpy(commodity.name, title);
    printf("Enter the ID of the stock:");
    scanf("%d", &commodity.id);
    printf("Enter the price of the stock:");
    scanf("%f", &commodity.price);
    printf("\n");

    printf("CONTENTS\n");
    printf("The name of stock is %s. \n", commodity.name);
    printf("The ID number of stock is %d.\n", commodity.id);
    printf("The price of the stock is %f. \n", commodity.price);
 
}