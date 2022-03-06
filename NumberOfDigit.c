/*Prog 26:Write a program to calculate the no of digits in a given no.
--------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,dc=0,t;
	printf("Enter  the number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		dc++;	
		n=n/10;
	}
	printf("The no of digits in the given no %d is %d",t,dc);
	return 0;
}


