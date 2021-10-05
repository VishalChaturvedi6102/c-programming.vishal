// C Program to calculate area of a triangle using heron's formula .
#include <stdio.h>
#include <math.h>
#include <conio.h>
 
int main()
{
    float sideOne, sideTwo, sideThree, s, area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);
    /* Area of any triangle = 
       sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree))
       Where s = (sideOne + sideTwo + sideThree)/2  */
    s = (sideOne + sideTwo + sideThree)/2;
    area = sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
    printf("Area of triangle : %0.4f\n", area);
     
    getch();
    return 0;
}