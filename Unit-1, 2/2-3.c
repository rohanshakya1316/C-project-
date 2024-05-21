/* Demonstrate the unformatted input output operations with
 getch(), getche(), putch(), getchar(), putchar(), gets(), and puts().*/
#include<stdio.h>
void main()
{
    char let, alp = 'A';
    char word[20];

    //Character I/O Unformatted 
    printf("Enter any character: ");
    let = getchar(); // unformatted input
    printf("The entered character is ");
    putchar(let);
    putchar('\n');
    putchar(alp);
    
    //String I/O Unformatted
    printf("\nEnter any string:");
    gets(word);
    printf("The entered string is ");
    puts(word);
    puts("Thank you");
    // Below I/O operators are declared in conio.h(header file)
    // getch(); //reads a character but not displays
    // getche(); //reads a character and displays immendiately
    // putch(); // displays character on the console.
}