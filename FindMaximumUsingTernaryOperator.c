/*Prog 2. Write a program to find maximum of two numbers using conditional operator/ternary operator?
----------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{

	int x,y;
	printf("Enter a value of x:");
	scanf("%d",&x);
	
	printf("Enter a value of y:");
	scanf("%d",&y);
	
	printf("The maximum of %d and %d is %d",x,y,x>y?x:y);
	return 0;		
}


