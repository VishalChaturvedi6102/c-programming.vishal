// C-Program to check whether a number is divisible by 5 and 11 using if else.
#include <stdio.h>
  
int main()
{
    int num;
  
    printf("Enter the number : ");
    scanf("%d", &num);
  
    if ((num % 5==0)&&(num % 11==0))
        printf("This number %d is divisible by 5 and 11.",num);
    return 0;
}