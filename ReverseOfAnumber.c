/*Prog 29: Write a program to Reverse of a No.
---------------------------------------------
*/
#include<stdio.h>
int main()
{
	int n,rev=0,t,a;
	printf("Enter  the number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)//123 !=0,12 !=0,1 !=0,0!=0
	{
		a=n%10;//a=3,a=2, a=1
		
		rev=rev*10+a;//rev=3,rev=30+2=32,rev=32*10+1
		
		n=n/10;//n=12,n=1,n=0
	}
	printf("The reveres of the original number %d is %d",t,rev);	
	return 0;
}


