// C-program to enter P,T,R and calculate simple intetest .
#include <stdio.h>

int main()
{
    float P, T, R, SI;

    printf("Enter principle (amount): ");
    scanf("%f", &P);

    printf("Enter time: ");
    scanf("%f", &T);

    printf("Enter rate: ");
    scanf("%f",&R);
    SI = (P * T * T) / 100;
    printf("Simple Interest = %f", SI);

    return 0;
}
