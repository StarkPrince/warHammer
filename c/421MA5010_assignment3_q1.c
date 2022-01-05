/* Name: Laulin Mishra
   Roll Number: 421MA5010  */


#include <stdio.h>

int main (void)
{
float sales, com;

printf("Enter the sales amount\n");
scanf("%f",&sales);

if (sales<1000)
	printf("No commission earned");
else if (sales<2500){
	com=0.1*sales;
	printf("Commission earned is %.2f",com);
}
else {
	com= 200+((sales-1000)*0.12);
	
	printf("Commission earned is %.2f",com);
}

	 
	
	
	
}