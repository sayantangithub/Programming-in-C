/*Prog 21:Write a program to check a number is Perfect or not.
-------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("The number %d is a perfect no.",n);
	else
		printf("The number %d is not a perfect no.",n);
	
	return 0;
}

