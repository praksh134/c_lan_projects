/* write a program of if, else if and else in c */

#include <stdio.h>

int main() {

	int s;

	printf("How fast are you drive? (km/h): ");
	scanf("%d", &s);

	if (s >= 100) {
	
		printf("You are too fast.\n");
	}

	else if (s >= 50) {
	
		printf("You are good to go.\n");
	}

	else {

		printf("OK. but to slow\n");

	}

	return 0;

}
