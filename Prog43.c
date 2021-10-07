// C-program to calculate the final velocity of the car.
#include <math.h>
#include <stdio.h>
int main()
{
    int v,u,a,s;
    float fv;
    u = 30;
    a = 5;
    s = 70;
    v = ((u*u)+(2*a*s));
    fv = sqrt(v);
    printf("FINAL VELOCITY = %f",fv);
    return 0;
}

