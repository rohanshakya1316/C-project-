// Input sales price and cost price and find the profit or loss and their percent.
#include<stdio.h>
void main()
{
    float SP, CP, gain, loss, per = 0;
    printf("Enter the sales price: ");
    scanf("%f", &SP);
    printf("Enter the cost price: ");
    scanf("%f", &CP);
    if (SP > CP)
    {
        gain = SP - CP;
        per = (gain/CP) * 100;
        printf("Profit = Rs.%.2f and Profit percent = %.2f %%", gain, per);
    }
    else if (SP < CP)
    {   loss = CP - SP;
        per = (loss/CP) * 100;
        printf("Loss = Rs.%.2f and Loss percent = %.2f %%", loss, per);
    }
    else
        printf("There is no profit or loss.");
    
}

