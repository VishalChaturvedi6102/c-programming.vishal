//C-program to enter breadth amd length of a rectangle and finds its area.
#include <stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the Length the rectangle :");
    scanf("%d",&l);
    printf("Enter the Breadth of the rectangle   :");
    scanf("%d",&b);
    area = (l*b);
    printf("The Area of the Rectangle  :  %d",area);
    return 0;
}