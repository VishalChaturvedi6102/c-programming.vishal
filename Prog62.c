// C-program to  input all sides of a triangle check whether the triangle is isosceles,scalene or equilateral triangle.
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter all the three sides of teh triangle : \n");
    scanf("%d%d%d", &s1 ,&s2 ,&s3 );

    if((s1==s2)&&(s2==s3))
    printf("Triangle is EQUILATERAL");
else
    if((s1==s2)||(s2==s3)||(s3==s1))
    printf("Triangle is ISOSCELES");
    else
    printf("Triangle is SCALENE");
    return 0;
}