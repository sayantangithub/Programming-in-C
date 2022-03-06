/*Prog 13:Write a C program to find the value of y using switch-case-default.
----------------------------------------------------------------------------
         __            
		| 
		|   1+x  when  n=1
		|   1+x/n when n=2
y(x,n)= |   1+x^n  when n=3
		|   1+nx  when n>3 or n<1
        |_
*/
#include<stdio.h>
#include<math.h>
int main() 
{
	double x,y;
	int n;
	printf("Enter the value of x and n:");
	scanf("%lf %d",&x,&n);
	switch(n)
	{
		case 1:
				y=1+x;
				break;
		case 2:
				y=1+x/n;
				break;
		case 3:
				y=1+pow(x,n);
				break;
		default :
				y=1+n*x;
	}                 
	printf("\nValue of y(%lf,%d)=%lf",x,n,y);
    return 0;
}


