/*Prog 31: Write a c program to generate Prime no's within a range.
-----------------------------------------------------------------
*/
#include<stdio.h>
#include<math.h>
int main()
{
	
	int ll,ul,n,i,prime;
	
	printf("Enter lower limit > 1:");
	scanf("%d",&ll);
	
	printf("Enter upper limit :");
	scanf("%d",&ul);
	
	for(n=ll;n<=ul;n++)
	{
		prime=0;
		for(i=2;i<=sqrt(n);i++)
		{
		   if(n%i==0)
		   {
				prime=1;
				break;  	
		   }	   
		}
		if(prime==0)
			printf("\nThe no %d is a prime no",n);		
	}
	return 0;
}


