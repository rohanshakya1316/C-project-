// Display "Sahid Smarak College" thousand times 
// with tab space using jumping statement. 
#include<stdio.h>
void main()
{
    char word[] = "Sahid Smarak College", reps = 5 ;
    // printf("How many repeatation do you want? Enter!: ");
    // scanf("%d", &reps);
    JUMP: 
        printf("%s\n", word);
        reps--;
    if (reps >= 1)
    {
    goto JUMP;
    }


 
   
    // while (reps <= 10)
    // {
    //     printf("%s\t", word);
        
    //     reps++;
    // }
}   

