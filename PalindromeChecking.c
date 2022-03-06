/*Prog 30: Write a program to check a no is Palindrome or not.
-------------------------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,rev=0,t,a;
	printf("Enter  the number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;//n=12,n=1,n=0
	}
	if(rev==t)
		printf("The given number %d is palindrome",t);
	else
		printf("The given number %d is not a palindrome",t);	
	return 0;
}


