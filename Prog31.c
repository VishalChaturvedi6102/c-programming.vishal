// C-program to enter P,T,R and calculate simple intetest .
#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T, CI;

    /* Input principle, time and rate */
    printf("Enter principle (amount): ");
    scanf("%f", &P);

    printf("Enter time: ");
    scanf("%f", &T);

    printf("Enter rate: ");
    scanf("%f", &R);

    /* Calculate compound interest */
    CI = P* (pow((1 + R / 100), T));

    /* Print the resultant CI */
    printf("Compound Interest = %f", CI);

    return 0;
}
 