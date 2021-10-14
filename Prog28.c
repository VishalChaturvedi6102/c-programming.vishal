// C-program to calculate area of an equilateral triangle .
#include <stdio.h>
#include <math.h>

int main()
{
    float s, area;
    printf("Enter side of an equilateral triangle: ");
    scanf("%f", &s);
    area = (sqrt(3) / 4) * (s * s);
    printf("Area of equilateral triangle = %.2f", area);
  return 0 ; 
}
