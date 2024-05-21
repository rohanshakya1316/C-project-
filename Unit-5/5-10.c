// Count the number of vowels and consonants in a word.
#include<stdio.h>
#include<string.h>
#define size 100
void countCH(char []);
void main()
{
    char str[size];
    printf("Enter any word:");
    gets(str);
    strupr(str);
    countCH(str);
    
}

void countCH(char str [])
{
    int i = 0, vowels = 0, consonants = 0;   
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels ++; 
        }
        else
            consonants ++;
        i ++;
    }
    printf("Total number of vowels in the word is %d.\n", vowels);
    printf("Total number of consonants in the word is %d.\n", consonants);
}

