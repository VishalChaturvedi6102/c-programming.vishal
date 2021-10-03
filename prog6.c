//C program to find Quotient and Remainder of an integer
#include <stdio.h>
int main()
{int div , divd , quo , rem;
printf("Enter the Divisor  :");
scanf("%d",&div);
printf("Enter the Dividend  :");
scanf("%d",&divd);
quo=(div/divd);
rem=(div%divd);
printf("The Quotient of the integer is  %d",quo);
printf("\nThe Remainder of the integer is  %d",rem);
return 0;
}