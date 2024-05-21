// Show the concept of global variables and static variables.
#include<stdio.h>
int var_global = 100;
void fxn_1(void);
void fxn_2(void);
void main()
{
    static int var_static;  // initializes to 0 automatically.
    fxn_1();
    fxn_2();
    printf("The global variable (in main) is %d.\n", var_global);
    printf("The static variable (in main) is %d.\n", var_static);
    printf("\n");

}
void fxn_1(void)
{
    int var_static = 10;
    var_static += 35;
    printf("The global variable (in fxn_1) is %d.\n", var_global);
    printf("The static variable (in fxn_1) is %d.\n", var_static);
    printf("\n");
}
void fxn_2(void)
{
    int var_static;
    var_static += 10;
    printf("The global variable (in fxn_2) is %d.\n", var_global);
    printf("The static variable (in fxn_2) is %d.\n", var_static);
    printf("\n");
}