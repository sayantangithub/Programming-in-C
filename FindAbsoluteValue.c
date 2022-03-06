/*Prog 1. Write a program to find absolute value of a number using conditional operator/ternery operator?
---------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
int main(void)
{
	int x;
	printf("Enter a value of x:");
	scanf("%d",&x);
	printf("The absolute value of %d is %d",x,x>0?x:-x);
	return 0;		
}

