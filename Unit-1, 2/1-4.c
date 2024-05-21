// Convert seconds into hours, minutes and seconds.
#include<stdio.h>
void main()
{
    int sec, hrs, mins, sec_rem;
    printf("Enter the seconds:");
    scanf("%d", &sec);
    hrs = sec / 3600;
    sec %= 3600;
    mins = sec / 60;
    sec_rem = sec % 60;
    printf("%d hours, %d minutes and %d seconds.", hrs, mins, sec_rem);
}