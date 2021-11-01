// C-program to check whether the inputted character is vowel or a consonant using if else.
#include <stdio.h>
  
int main()
{
    int ch;
  
    printf("Enter the character : ");
    scanf("%c", &ch);
  
    if  ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')||(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))

        printf("The inputted character is a VOWEL.");
    else 
        printf("The inputted character is  a CONSONANT.");
    return 0; 
}