// C-program to enter two integers and print their sum.
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the value of integer A  :");
    scanf("%d",&a);
    printf("Enter the value of integer B   :");
    scanf("%d",&b);
    sum = (a+b);
    printf("The sum of integer A and integer B  =  %d",sum);
    return 0;
}