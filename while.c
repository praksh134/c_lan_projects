/* while.c */

#include <stdio.h>

int main() {

	int x;
	x = 0;

	while (x == 0) {
	
		printf("Dp you want to quit? Press 1\n");
		scanf("%d", &x);
	}

	printf("Good Bye!\n");

	return 0;

}
