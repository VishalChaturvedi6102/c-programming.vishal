// C-program to calculate profit and loss.
#include <stdio.h>
int main()
{
    int cp,sp, amount; 
    
    printf("Enter the COST PRICE: ");
    scanf("%d", &cp);
    printf("Enter the SELLING PRICE: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        amount = sp - cp;
        printf("PROFIT = %d", amount);
    }
    else if(cp > sp)
    {
        amount = cp - sp;
        printf("LOSS = %d", amount);
    }
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}