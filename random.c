/* random.c */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_rand_func(int max) {

	int x;
	x = rand() % max + 1;
	return x;
}

int main() {

	int random;
	
	srand(getpid());
	random = our_rand_func(10);
	printf("%d\n", random);

	return 0;
} 
