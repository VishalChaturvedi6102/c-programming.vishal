// C-program to input week number and prinht week day using if else.
#include <stdio.h>

int main()
{
    int week;
    printf("Enter the week number : ");
    scanf("%d", &week);

    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("INVALID INPUT");
    }

    return 0;
}