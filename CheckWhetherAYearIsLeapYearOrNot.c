/*Prog 8: Write a C program to check a year is a leap year or not .
------------------------------------------------------------------
*/
#include <stdio.h>
int main() 
{
	int year;
	printf("Enter a year :");
	scanf("%d",&year);
	
	if((year%400==0)||(year%4==0)&&(year%100 !=0))
		printf("%d is a Leap Year",year);
	else
		printf("%d is not a Leap Year",year);	

	return 0;
}


