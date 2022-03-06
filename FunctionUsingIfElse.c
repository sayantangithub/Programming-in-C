/*Prog 10: Write a C program to find the value of y using if-else ladder.
-----------------------------------------------------------------------
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

	double x,n,y;
	printf("Enter the value of x and n:");
	scanf("%lf %lf",&x,&n);
	if(n==1)
			y=1+x;
		else if(n==2)
				y=1+x/n;
			else if(n==3)	
				y=1+pow(x,n);
				else
				  y=1+n*x;
	printf("\nValue of y(%lf,%lf)=%lf",x,n,y);
	return 0;
}


