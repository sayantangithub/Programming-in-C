/*Prog 3. Write a program to find maximum of three  numbers using conditional operator/ternary operator?
-------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
int main()
{

	int x,y,z;
	printf("Enter a value of x:");
	scanf("%d",&x);
	
	printf("Enter a value of y:");
	scanf("%d",&y);
	
	printf("Enter a value of z:");
	scanf("%d",&z);
	
	printf("The maximum of %d , %d and %d is %d",x,y,z,(x>y)&&(x>z)?x:(y>z)?y:z);
	return 0;		
}


