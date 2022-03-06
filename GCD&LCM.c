/*Prog 23: Write a Program to find LCM and GCD of 2 given numbers.
------------------------------------------------------------------
LCM: The Least Common Multiple ( LCM ) is also referred to as the Lowest Common Multiple ( LCM ) and Least Common Divisor ( LCD) .
The LCM is the smallest positive integer that is evenly divisible by both a and b.

For example, LCM(2,3) = 6 and LCM(6,10) = 30.


GCD:The greatest common divisor (gcd) of two or more integers, which are not all zero, 
is the largest positive integer that divides each of the integers. 

For example, the gcd of 8 and 12 is 4, that is, .

GCD(8,12) = 4 
GCD(6,10) = 2
*/
#include<stdio.h>
int main()
{
	int num1, num2,max,min;
	
	printf("Enter  1st no :");
	scanf("%d",&num1); 
	
	printf("Enter  2nd no :");
	scanf("%d",&num2);
	
	if(num1>num2)
		max=num1;
	else
		max=num2;
		
	if(num1<num2)
		min=num1;
	else
		min=num2; 
	
	for(;!((max%num1==0)&&(max%num2==0));max++);
	printf("The LCM is %d",max);	
    
    for(;!((num1%min==0)&&(num2%min==0));min--);
    printf("\nThe GCD is %d",min);	
 	
	return 0;
}


