/* Name: Laulin Mishra
   Roll Number: 421MA5010  */


#include <stdio.h>

#include <math.h>
int main (void)
{
	float a,b,c,D;
	
	
	
	printf(" Let the quadratic equation be of the form (ax*x) +bx +c/n Enter the coefficients a,b,c\na:");
	scanf("%f",&a);
	
	printf("b:");
	scanf("%f",&b);
	
	printf("c:");
	scanf("%f",&c);
	
	D= (b*b)-(4*a*c);
	
	if ( D<0){
		
		printf("The roots are imaginary and given by %f+i%f and %f-i%f", (-b)/(2*a), (sqrt(-D))/(2*a),(-b)/(2*a), (sqrt(-D))/(2*a)  );
	}
	else if (D>0)
	 
	 printf ( "The roots are real and distinct given by %f and %f", (-b)/(2*a)+(sqrt(D))/(2*a), (-b)/(2*a)-(sqrt(D))/(2*a));
	 
	 else printf( "The roots are equal and given by %f", (-b)/(2*a));
	
	
	
	
}