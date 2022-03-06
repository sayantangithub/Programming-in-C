/*Prog 6: Write  a C program to find largest among three nos using nested if-else statement.
------------------------------------------------------------------------------------------																 
*/
#include <stdio.h>
int main() 
{
int a,b,c,max;
	printf("Enter a value of x:");
	scanf("%d",&a);
	
	printf("Enter a value of y:");
	scanf("%d",&b);
	
	printf("Enter a value of z:");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is Largest",a);
		}
		else
		{
			printf("%d is largest",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is Largest",b);
		}
		else
		{
			printf("%d is largest",c);
		}		
	}
	return 0;
}



