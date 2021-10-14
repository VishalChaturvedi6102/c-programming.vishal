// C program to convert temperature from degree fahrenheit to celsius .
#include <stdio.h>

int main()
{
    float cel, fah;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("%.2f Fahrenhite = %.2f Celsius", fah, cel);

    return 0;
}
