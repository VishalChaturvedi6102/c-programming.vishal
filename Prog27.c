// C-program to enter base and height of the triangle and find its area .
#include <stdio.h>

int main()
{
    float b, h, area;
    printf("Enter base of the triangle: ");
    scanf("%f", &b);
    printf("Enter height of the triangle: ");
    scanf("%f", &h);
    area = (b * h) / 2;
    printf("Area of the triangle = %.2f", area);
    return 0;
}
