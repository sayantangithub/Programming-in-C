/*Prog 17:Write a program to find sum of all integers greater than 100 and less than 200 that are divisible by 7.
---------------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=101;i<200;i++)
	{
		if(i%7==0)	
			sum=sum+i;	
	}
	printf("The sum within the provided range is %d",sum);	
	return 0;
}

