#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define COUNT 10


// To return a random no. between higher and lower
int findRand(int lower, int higher) {
    int range = higher - lower + 1;
    return rand() % range + lower;
}

int main(void)    {
	    // Taking 1483 as the prime number
    int prime = 1483;
    printf(" i                  L_i  R_i\n\n"); // columns have width 2, 21, 5 respectively
    srand(time(NULL));

	/* Tabulating L_i and R_i */
	
    int i;
    for (i = 0; i < COUNT; i++) {
	int random = findRand(0, INT_MAX);
	printf("%2d %20d %4d\n", i + 1, random, random % prime);
    }
    return 0;
}
