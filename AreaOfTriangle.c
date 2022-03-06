/*Prog 12:Write a pogram to find area of a triangle using switch-case.
------------------------------------------------------------------------
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float s,b,h,x,y,z,area;
	printf("Area of a triangle : \n");
	printf("\nMethod-I : 1/2 * base * height \n");
	printf("\nMethod-II:sqrt [s(s-a)(s-b)(s-c)]\n");
	printf("\nWhich method do you want to use ?\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :
			printf("\nPlease enter the values of base and height of the triangle respetively : \n");
			scanf("%f %f",&b,&h);
			area=(b*h)/2;
			printf("\nThe area of the triangle is : %.2f\n",area);
			break ;
		case 2 :
			printf("\nPlease enter the values of 3 sides of the triangle : \n");
			scanf("%f %f %f",&x,&y,&z);
			s=(x+y+z)/2;
			area=sqrt(s*(s-x)*(s-y)*(s-z));
			printf("\nThe area of the triangle is : %.2f\n",area);
			break;
		default :
			printf("\nThere is no such way to find the area of a triangle except the above two .");
	}
	return 0;
}


