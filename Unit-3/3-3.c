// Enter age and display age group like child, teenager, adult and old.
#include<stdio.h>
void main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 60)
        printf("Your age (%d) group is OLD category.", age);
    else if (age >= 20)
        printf("Your age (%d) group is ADULT category.", age);
    else if (age >= 13)
        printf("Your age (%d) group is TEENAGER category.", age);
    else if (age >= 1)
        printf("Your age (%d) group is CHILD category.", age);
    else 
        printf("ERROR! AGE WILL BE IN NUMBER. CHECK IT!!");

}