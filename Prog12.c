//C program to find the area of trapezium.
#include <stdio.h>
int main()
{
    float a, b, h, area ;
    printf("Enter the values of base A , base B and the height of the trapezium h : \n");
    scanf("%f%f%f", &a, &b, &h);
    area= (0.5*(a+b)*h);
    printf("The Area of Trapezium is :  %.3f",area);
    return 0;

}