#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return : always 0 (Success)
 */
int main() {
    int n;
    srand(time(0));
    n = rand() % RAND_MAX + 1;

    printf("The number %d ", n);
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

