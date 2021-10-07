// C-program to calculate the final velocity and the distance travelled by the horse.
#include <stdio.h>
int main()
{
    int u,a,s,t;
    float v;
    u = 0;
    a = 4;
    t = 3;
    v = (u+(a*t));
    s = ((u*t)+(0.5*a*(t*t)));
    printf("FINAL VELOCITY = %f",v);
    printf("\nDISTANCE TRAVELLED = %d",s);
    return 0;
}