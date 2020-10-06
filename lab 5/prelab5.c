#include <stdio.h>
#include <math.h>
#include <time.h>

double log16(double x);



double log16(double x) {
    return (log(x)/log(16));
}

int main(void) {
    clock_t before = clock();

    printf("\n");

    for(int i = 0; i < 13; i++) {
        printf("Log base 16 of %d = %lf\n", (int) pow(2,i), log16(pow(2,i)));
    }

    printf("\n");


    clock_t after = clock();

    printf("Elapsed: %f seconds\n", (double)(after - before) / CLOCKS_PER_SEC);

    return 0;
}