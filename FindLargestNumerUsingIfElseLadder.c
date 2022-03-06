/*Prog 7: Write  a C program to find largest among three no using only if-else ladder statement.
-----------------------------------------------------------------------------------------------	
*/																   
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value of x:");
	scanf("%d",&a);
	
	printf("Enter a value of y:");
	scanf("%d",&b);
	
	printf("Enter a value of z:");
	scanf("%d",&c);

	if((a>b)&&(a>c))                        
		printf("%d is largest",a);
	else if(b>c)
		printf("%d  is largest",b);
	else
		printf("%d is largest",c);
	return 0;
}


