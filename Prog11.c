// C Program to calculate area of a triangle using heron's formula .
#include <stdio.h>
#include <math.h>
int main()
{
    float side1, side2, side3, s, area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f", &side1, &side2, &side3);
    
    s = (side1 + side2 + side3)/2;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));

    printf("Area of triangle : %0.2f\n", area);
    return 0;
}
