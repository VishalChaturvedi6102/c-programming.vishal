// C-program to convert a given integer into years, months and days .3 
#include <stdio.h>
int main() 
{
	int ndays,y,m,d;
	printf("Input no. of days: ");
	scanf("%d", &ndays);
	y = (int) ndays/365;
	ndays = ndays-(365*y);	
	m = (int)ndays/30;
	d = (int)ndays-(m*30);
	printf(" %d Year \n %d Month \n %d Day", y, m, d);
	return 0;
}
