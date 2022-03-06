/*32.Write a program to generate Fibonacci Series.
-------------------------------------------------
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13,......
*/                 
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a=0,b=1,i=2,c;
	printf("Enter the no of terms to generate for Fibonacci Series >2:");
	scanf("%d",&n);
	printf("Fibonacci Series :");
	printf("%d\t%d\t",a,b);
	do
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		i++;
	}while(i<n);
	return 0;
}

