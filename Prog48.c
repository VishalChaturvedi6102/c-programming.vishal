// C-Program to find the maximum between two numbers using if else.
#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter both the numbers =");
scanf("%d",&n1);
scanf("\n%d",&n2);
if(n1>n2)
{
    printf("The first number is maximum.");}
else
{printf("The second number is maximum.");}
return 0;
}