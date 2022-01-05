/* Name: Laulin Mishra
   Roll Number: 421MA5010  */


#include <stdio.h>

int main (void)
{
	float a,b,c;
	printf("Enter the sides of triangle\na:");
	scanf("%f", &a);
	
	printf("b:");
	scanf("%f",&b);
	
	printf("c:");
	scanf("%f", &c);
	
	if ( (a+b>c) && (b+c>a) && (c+a>b))
		printf("The triangle is valid");
	else printf("The triangle is not valid");
	
}