// C-program to calculate the population of the city after two years.
#include <stdio.h>
int main()
{ 
    float p1,p2,p3;
    printf("Enter the population of the city :");
    scanf("%f",&p1);
    p2 = ((p1*0.20)+p1);
    printf("The population after the first year  :%f",p2);
    p3 = ((p2*0.30)+p2);
    printf("\nThe population after two years is : %f",p3);
    return 0;
}