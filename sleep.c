/* learn about sleep function in c
 * sleep.c */

#include <stdio.h>
#include <unistd.h>

int main() {

	printf("Wait for processing");
	fflush(stdout);
	sleep(2);

	printf(".");
	fflush(stdout);
	sleep(2);

	printf(".");
	fflush(stdout);
	sleep(2);

	printf("Ok\n");

	return 0;

}
