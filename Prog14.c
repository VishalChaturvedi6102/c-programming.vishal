// C program to perform input/output of all data types.
#include <stdio.h>
int main()
{
    int i;
    char ch;
    float f;
    printf("Enter the value of Integer  :",  i);
    scanf("%d",&i);
    printf("Enter the value of Character   :",  ch);
    getchar();
    scanf("%c",&ch);
    printf("Enter the value of Float    :",    f);
    scanf("%f",&f);
    printf("int i =  %d\n", i);
    printf("char ch = %c\n", ch);
    printf("float f = %f\n",  f);
    return 0;
}