// Implement conditional(ternery) operator to display the eligibility to vote.
#include<stdio.h>
void main()
{
    int age, test;
    printf("Enter your age to test your eligibility to vote: ");
    scanf("%d", &age);
    test = age >=18?  // Ternery operator
    printf("The person with age %d years old is eligible to vote. ", age):
        printf("The person with age %d years old isnot eligible to vote. ", age);
}

