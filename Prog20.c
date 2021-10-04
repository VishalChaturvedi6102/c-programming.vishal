// C-program to enter length in centimeter and print it into meter and kilometer .
#include <stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter the length in centimeter  : ");
    scanf("%f",&cm);
    m = (cm/100.0);
    km = (cm/100000.0);
    printf("The value in meter = %.2f  m ", m);
    printf("\nThe value in kilometer = %f km\n", km);
    return 0;
}