// C-program to calculate the salary of an employee.
#include <stdio.h>
int main()
 {
float bs,hra,ta;
printf("Enter the basic salary of the employee : ");
scanf("%f",&bs);
hra = ((bs*0.15)+bs);
ta = ((bs*0.20)+bs);
printf("The house rent allowance HRA = %f",hra);
printf("\nThe tansport allowance TA    = %f,ta");
return 0;
}