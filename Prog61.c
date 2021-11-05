// C-program to enter three sides of a triangle and check whether the inputted triangle is valid or not.
#include <stdio.h>

int main()
{
    int a,b, c;

    
    printf("Enter  all three sides of the triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
    
    if((a + b) > c)
    {
        if((b + c) > a)
        {
            if((a + c) > b) 
    {
                printf("Triangle is VALID.");
            }
            else
            {
                printf("Triangle is INVALID.");
            }
        }
        else
        {
            printf("Triangle is INVALID .");
        }
    }
    else
    {
        printf("Triangle is INVALID.");
    }

    return 0;
}