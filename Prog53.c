//C-program to check whether the year is leap or not using if else.
#include <stdio.h>
  
int main()
{
    int num;
  
    printf("Enter the number : ");
    scanf("%d", &num);
  
    if  ((num % 4 == 0)&&(num % 100 == 0)||(num % 400 == 0))
        printf("This year is LEAP YEAR.");
    else 
        printf("This year is not a LEAP YEAR.");
    return 0;
}