// C-Program to find the maximum between three numbers using if else.
#include<stdio.h>
int main()
{
int n1,n2,n3,max;
printf("Enter all the three numbers =");
scanf("%d",&n1);
scanf("\n%d",&n2);
scanf("\n%d",&n3);
if(n1>n2)
{
    if(n1>n3)
    {
        max=n1;
    }
    else
    max=n3;
}

else
{
    if(n2>n3)
{
    max=n3;
  }
  else 
  {
      max=n3;
  }
  }

    printf("Maximum among all the integers is = %d",max);
return 0;
}