//C-program to check whether the in putted character is an alphabet or not using if else.
#include <stdio.h>
  
int main()
{
    int ch;
  
    printf("Enter the character : ");
    scanf("%c", &ch);
  
    if  ((ch >= 'a' && ch <= 'z' )||(ch >= 'A' && ch <= 'Z'))
        printf("The inputted character is an ALPHABET.");
    else 
        printf("The inputted character is not an ALPHABET.");
    return 0;
}