/*Prog 5: Write  a C program to find largest among three nos using only if statement.
-----------------------------------------------------------------------------------																 
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
	
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
		
	printf("Largest among the three nos is %d",max);	
	return 0;
}

