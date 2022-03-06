/*Prog 16:Write a program to find the value of y=x^n where x and n are taken as user input and consider positive only.
--------------------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int x,n,y=1,i;
	printf("Enter the value of x and n:");
	scanf("%d %d",&x,&n);// x=2 n=3
	
	for(i=1;i<=n;i++)
		y=y*x;	
	
	printf("%d to the power %d is %d",x,n,y);
	
	return 0;
}

