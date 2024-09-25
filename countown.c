/* write a countown program in c
 * countown.c */

#include <stdio.h>
#include <unistd.h>

int main() {

	int num;
	printf("Enter the countown number: ");
	scanf("%d", &num);

	while (1) {

		printf("%d\n", num);
		sleep(1);

		num--;

		if (num < 0)
			break;
	}

	return 0;
}
