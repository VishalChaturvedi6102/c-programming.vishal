// C-program to enter marks of five subjects and calculate total, average and percentage .
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, total, avg, per ;
    printf("Enter the marks of all five subjects : ");
    printf("Enter the marks of first subject  = ");
    scanf("%f",&m1);

    printf("Enter the marks of second subject  = ");
    scanf("%f",&m2);

    printf("Enter the marks of third subject  = ");
    scanf("%f",&m3);

    printf("Enter the marks of fourth subject  = ");
    scanf("%f",&m4);

    printf("Enter the marks of fifth subject  = ");
    scanf("%f",&m5);
     
     total = (m1+m2+m3+m4+m5);
     avg = ((total)/5);
     per = (total/500.0) * 100;
 
 printf("The total of marks of five subjects  =  %f",total);
 printf("\nThe average of marks of five subjects  =  %f",avg);
 printf("\nThe percentage of marks of five subjects  =  %f",per);
    
    return 0;
}