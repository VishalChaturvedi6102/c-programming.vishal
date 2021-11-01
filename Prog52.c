// C-Program to check whether a number is odd or even using if else.
#include <stdio.h>
  
int main()
{
    int num;
  
    printf("Enter the number : ");
    scanf("%d", &num);
  
    if  (num % 2 == 0)
        printf("Number is EVEN.");
    else 
        printf("Number is ODD.");
    return 0;
}