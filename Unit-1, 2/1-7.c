// Take marks obtained by student in five subjects and display the result along with percent.
#include<stdio.h>
void main()
{
    // Let the five subjects be English, Nepali, Maths, Computer and Science.
    float eng, nep, math, comp, sci, total, percent;
    printf("Enter the marks obtained in English: ");
    scanf("%f", &eng);
    printf("Enter the marks obtained in Nepali: ");
    scanf("%f", &nep);
    printf("Enter the marks obtained in Maths: ");
    scanf("%f", &math);
    printf("Enter the marks obtained in Computer: ");
    scanf("%f", &comp);
    printf("Enter the marks obtained in Science: ");
    scanf("%f", &sci);
if(eng<40 || nep<40 || math<40 || comp<40 || sci<40)
    printf("FAILED in any of the subjects because the pass marks is 40.");
else
    {
        total = eng + nep + math + comp + sci;
        percent = (total/500)*100;
        if(percent >=80)
            printf("The student obtained %f percent and score Distinction.", percent);
        else if(percent>=70)
            printf("The student obtained %f percent and score First Division.", percent);
        else if(percent>=55)
            printf("The student obtained %f percent and score Second Division.", percent);
        else 
            printf("The student obtained %f percent and score Third Division.", percent);
        
    }
    
}
