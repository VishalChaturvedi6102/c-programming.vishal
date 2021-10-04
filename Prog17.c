//C-program to enter breadth amd length of a rectangle and finds its perimeter.
#include <stdio.h>
int main()
{
    int l,b,perimeter;
    printf("Enter the Length the rectangle :");
    scanf("%d",&l);
    printf("Enter the Breadth of the rectangle   :");
    scanf("%d",&b);
    perimeter = (2*(l+b));
    printf("The Perimeter of the Rectangle  :  %d",perimeter);
    return 0;
}