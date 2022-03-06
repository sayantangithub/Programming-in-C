/*Prog 22: Write a program to find perfect within a range.
---------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,i,sum,lr,ur;
	
	printf("Enter the lower range: ");
	scanf("%d",&lr);
	
	printf("Enter the upper range: ");
	scanf("%d",&ur);
	
	for(n=lr;n<=ur;n++)
	{
		sum=0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
				sum=sum+i;
		}		
		if(sum==n)
			printf("The number %d is a perfect no.\n",n);//6
	}
	return 0;
}

