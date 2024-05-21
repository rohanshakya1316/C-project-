// Count number of vowels in a string provided by user.
#include<stdio.h>
#define N 100
int vowels(char *);
void main()
{
    char string[N];
    int no_of_vowels = 0;
    printf("Enter any string:");
    gets(string);
    no_of_vowels = vowels(string);
    printf("Total number of vowels are %d.\n", no_of_vowels);
}
int vowels(char *str)
{
    int count = 0, i;
    for(i = 0; *(str + i) != '\0'; i++)  // for changing string to lowercase.
    {

        if (*(str + i)>= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) += 32;
        }

        if (*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' // counting vowels
         || *(str + i) == 'o' || *(str + i) == 'u')
        {
            count ++;
        }
    }
    return count;
}