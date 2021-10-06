// C-program to find addition of float same numbers without using + and - .
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,i;  //Variable declaration
    printf("Enter the first number: ");
    scanf("%d",&num1); 
    printf("Enter the second number: ");
    scanf("%d",&num2);
    for(i=0; i<num2; i++){
   num1++;
    }
printf("Sum of two numbers : %d ",num1);
getch();
    return 0;
}