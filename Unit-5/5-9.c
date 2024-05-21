// Count the number of word in a sentence by passing string to function.
#include<stdio.h>
#define size 100
void count(char []);
void main()
{
    char str[size];
    printf("Enter any string:");
    gets(str);
    count(str);
    
}
void count(char str [])
{
    int i = 0, word = 0;   
    while (str[i] != '\0')
    {
        if (str[i] == 32) // ASCII for space is 32.
        {
            word ++;
            
        }
        i ++;
    
    }
    
    printf("Total number of word in the sentence is %d.", word + 1);
    
}
