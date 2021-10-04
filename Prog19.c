//C-program to enter radius of a circle and find its diameter,circumference and area.
#include <stdio.h>
#define pi 3.14
int main()
{
    float rad,dia,cir,area;
    printf("Enter the radius of the circle :");
    scanf("%f",&rad);
    dia = (2*rad);
    printf("\nThe Diameter of the circle   :  %f", dia);
    cir = (2*(pi*rad));
    printf("\nThe Circumference of the circle  =  %f",cir);
    area = (pi*(rad*rad));
    printf("\nThe Area of the circle  =  %f",area);
    return 0;
}