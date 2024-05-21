// Display the Armstrong number between 100 to 1000 and also count them.
#include<stdio.h>
void main()
{
int num, ori_num = 0, rem = 0, arm, count = 0;
printf("The Armstrong number between 100 to 1000:\n");
for (num = 100; num <= 1000; num++)
{
    ori_num = num;
    arm = 0;
    while (ori_num != 0)
    {
        rem = ori_num % 10;       
        arm += rem * rem * rem;
        ori_num /= 10;
    }
    if (arm == num)
    {
        printf("%d\t", arm);
        count ++;
    }
    
}    
printf("\nTotal armstrong number between 100 to 1000 is %d.", count);
}


