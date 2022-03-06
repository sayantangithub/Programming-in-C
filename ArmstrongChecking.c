/*Prog 27:Write a program to check a no is Armstrong No or not.
-------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,dc=0,t,s,y,sum=0,a,i;
	printf("Enter  the number:");
	scanf("%d",&n);
	s=t=n;
	while(n!=0)
	{
		dc++;	
		n=n/10;
	}
	while(t!=0)
	{
		a=t%10;
		y=1;
		for(i=1;i<=dc;i++)
			y=y*a;	
		sum=sum+y;
		t=t/10;		
	}
	if(sum==s)
		printf("The given no %d is Armstrong No.",s);
	else
		printf("The given no %d is not a Armstrong No.",s);
	return 0;
}

