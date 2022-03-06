/*Prog 9: Write a program to find the roots of a quadratic quation.(Code Contributed By Abir Dutta ME)
----------------------------------------------------------------------------------------------------
Roots  of the equation
ax^2+bx+c=0  can be  obtained by

  -b + sqrt*(b^2)-4ac) 
     -
x=--------------------
       2*a
	   
where b^2 -4ac is called discriminant
1. If b^2 -4ac > 0 the roots are real and unequal
2. If b^2 -4ac =0 the roots are real and equal , x=-b/2a.
3. If b^2 -4ac<0 the roots are imaginary 
i.e. 


   -b        sqrt(b^2 -4ac)
x=----  +    ---------------
   2a   -        2a
*/
#include <math.h>
#include <stdio.h>
int main()
{
	double a, b, c, d, x1,x2, real, imaginary;
	printf("For the equation ax^2+bx+c , please enter the values of the constants a , b , c : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d= b * b - 4 * a * c;
	if (d> 0)
	{
		x1= (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("The two roots are real but they are not equal\n");
		printf("root1 = %.lf and root2 = %.lf", x1, x2);
	}
	else
	{
		if (d== 0)
		{
			x1 = -b / (2 * a);
			printf("The two roots are real and they are equal to each other\n");
			printf("root1 = root2 = %.lf;", x1);
		}
		else
		{
			real= -b / (2 * a);
			imaginary= sqrt(-d) / (2 * a);
			printf("The roots are imaginary please check your variables again\n");
			printf("root1 = %.lf+%.lfi and root2 = %.f-%.fi", real, imaginary, real, imaginary);
		}
	}
	return 0;
}

