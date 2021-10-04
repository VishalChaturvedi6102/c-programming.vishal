//C-program to enter two number and perform all arithmetic operations.
#include <stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    printf("Enter the value of integer A  :");
    scanf("%d",&a);
    printf("Enter the value of integer B   :");
    scanf("%d",&b);
    sum = (a+b);
    sub = (a-b);
    mul = (a*b);
    div = (a%b);
    printf("The addition of integer A and integer B  =  %d",sum);
    printf("\nThe subtraction of integer A and integer B  =  %d",sub);
    printf("\nThe multiplication of integer A and integer B  =  %d",mul);
    printf("\nThe division of integer A and integer B  =  %d",div);
return 0;
}