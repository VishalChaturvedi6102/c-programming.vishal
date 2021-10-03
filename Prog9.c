//C program to swap two integers 
#include <stdio.h>
int main()
{
 int a=10,b=20;
 a=a+b;
 b=a-b;
 a=b-a;
 printf("The integers after swapping is A = %d",a);
 printf("\n\nThe integers after swapping is B = %d",b);
 return 0;   
}
