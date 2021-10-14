// C program to enter two angles of a triangle and then find its third angle .
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first angles of triangle  'a': ");
    scanf("%d", &a);
    printf("Enter second angles of triangle  'b': ");
    scanf("%d", &a);

    c = 180 - (a + b);
    printf("Third angle of the triangle = %d", c);
    return 0;
}
