/*Prog 11:Write a Menu Driven Program for Simple Calculator.
----------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,a,b;
	
	printf("**********Calculator Program************\n");
	printf("\n1.Addition\n");
	printf("\n2.Subtraction\n");
	printf("\n3.Multiplication\n");
	printf("\n4.Division\n");
	printf("\nEnter your choice:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			   printf("Enter two values for Addition:");
			   scanf("%d %d",&a,&b);
			   printf("The Result of Addition is: %d",a+b);
			   break;
		
		case 2:
			   printf("\nEnter two values for Subtraction:");
			   scanf("%d %d",&a,&b);
			   printf("The Result of Subtraction is: %d",a-b);
			   break;
			   
		case 3:
			   printf("\nEnter two values for Multiplication:");
			   scanf("%d %d",&a,&b);
			   printf("The Result of Multiplication is: %d",a*b);
			   break;
			   
		case 4:
			   printf("\nEnter two values for Division:");
			   scanf("%d %d",&a,&b);
			   printf("The Result of Division is: %d",a/b);
			   break;
		
		default :
			     printf("\nWrong Input !!!!");
			     printf("Please provide correct option next time onwards....");
			     
			
	}
	return 0;
}


