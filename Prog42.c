// C-program to calculate frequency of a given wave .
#include <stdio.h>
int main()
{
    float f,c,w;
    c = 299792458;
    printf("Enter the wavelength =");
    scanf("%f",&w);
    f = (c/w);
    printf("FREQUENCY = %.2f",f);
    return 0;
}