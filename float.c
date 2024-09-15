/* float example in c 
 * write a program to input the radius and print the area of circle value in c*/

#include <stdio.h>

int main(){

	float pi, r, res; 

	printf("Enter the radius value: ");
	scanf("%f", &r);

	pi = 3.14;
	res = r*r * pi;
	printf("The area of the circle is: %f\n", res);

	return 0;

}

