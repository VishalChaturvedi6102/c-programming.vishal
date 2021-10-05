// C-program to enter P,T,R and calculate simple intetest .
#include <stdio.h>

int main()
{
    float P, T, R, SI;

    /* Input principle, rate and time */
    printf("Enter principle (amount): ");
    scanf("%f", &P);

    printf("Enter time: ");
    scanf("%f", &T);

    printf("Enter rate: ");
    scanf("%f", &T);

    /* Calculate simple interest */
    SI = (P * T * T) / 100;

    /* Print the resultant value of SI */
    printf("Simple Interest = %f", SI);

    return 0;
}