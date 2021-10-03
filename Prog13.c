//C program to find the volume of the sphere
#include <stdio.h>
#define pi 3.141592653589793
int main()
{
    int r, volume;
    printf("Enter the value of the radius  : ");
    scanf("%d",&r);
    volume = ((4/3)*pi*(r*r*r));
    printf("The Volume of the Sphere is : %d",volume);
    return 0;

}