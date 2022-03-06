/*Prog 19:Write a program to find even sum and odd sum within a range.
---------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,esum=0,osum=0,i;
	printf("Enter range :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			esum=esum+i;
		else
			osum=osum+i;
	}
	printf("Even Sum= %d",esum);
	printf("\nOdd Sum=%d",osum);
	return 0;
}

