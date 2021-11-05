// C-program to input electricity unit charges and calculate total electricity bill according to the question.
#include <stdio.h>

int main()
{
    int unit;
    float amt, totalamount, surcharge;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    surcharge = amt * 0.20;
    totalamount  = amt + surcharge;

    printf("Electricity Bill = Rs. %.2f", totalamount);
    return 0;
}