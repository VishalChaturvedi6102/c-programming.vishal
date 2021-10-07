// C-program to calculate slope and the angle of inclination when the line passes through x and y.
#include <stdio.h>
#include <math.h>
#define pi 3.141592654
int main()
{
float x1,x2,y1,y2,m,theta;
printf("Enter the value of x1 and x2 :");
scanf("%f\n%f",&x1,&x2);
printf("Enter the value of y1 and y2 :");
scanf("%f\n%f",&y1,&y2);
m = (y2-y1)/(x2-x1);
printf("SLOPE = %f",m);

theta = atan(m);
printf("\nANGLE OF INCLINATION  :  %f",theta);
return 0;
} 