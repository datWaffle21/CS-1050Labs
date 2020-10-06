/*
 * Noah Wimmer
 * Lab sect. A
 * 9/28
 * Lab 5
 *
 */
#include <stdio.h>
#include <math.h>

double logAny(double x, double b);

//Returns the value of log base b of x
double logAny(double x, double b) {

	return(log(x)/log(b));

}

int main(void) {
	
	//loop through each outer number
	for(int i = 0; i <= 13; i++) {
	printf("Number %d:\n", (int) pow(2,i));
		// loop through each inner number (2-32)
		for(int j = 1; j <= 5; j++) {
			//loops through each outer number and prints their log with the base of each inner number
			printf("\tlog base %d = %lf\n",(int) pow(2,j), logAny(pow(2,i), pow(2,j)));
		}	
	}

	
	return 0;
}
