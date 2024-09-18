/* triangle.c 
 * write a program to result the area of triangle of user input. */

#include <stdio.h>

int area_triangle(int b, int h) {

	int area;
	
	area = (b * h) / 2;
	
	return area;
}

int main() {

	int base, height, area;

	printf("Enter the base: ");
	fflush(stdout);
	scanf("%d", &base);

	printf("Enter the height: ");
	fflush(stdout);
	scanf("%d", &height);

	area = area_triangle(base, height);
	printf("The area of triangle is: %d\n", area);
	
	return 0;
}
