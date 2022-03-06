/*Prog 4. Write a C program to count how many bits are on in a number.
--------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	unsigned int num;
	int c=0;
	scanf("%u",&num); 
	for(;num;num>>=1)
	{
		if(num &1)
			c++; 
	}
	printf("%d",c);
	return 0;
}

