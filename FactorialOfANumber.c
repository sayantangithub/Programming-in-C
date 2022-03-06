/*Prog 14:Write a C  program to find the factorial of a number.
-------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	unsigned int n,fact=1,i;
	printf("Enter a no:");
	
	scanf("%u",&n);
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("Factorial of %u is %u",n,fact);
	
	return 0;
}

