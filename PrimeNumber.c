/*Prog 18:Write a program to check whether a given number is prime or not.
------------------------------------------------------------------------
*/
#include<stdio.h>
#include<math.h>
int main()
{
	
	int n,i,prime=0;
	
	printf("Enter a no :");
	scanf("%d",&n);
	
	for(i=2;i<=sqrt(n);i++)
	{
	   if(n%i==0)
	   {
			printf("The no %d is Not prime",n); 
			prime=1;
			break;  	
	   }	   
	}
	if(prime==0)
		printf("The no %d is a prime no",n);
	return 0;
}

