#include <stdio.h>

int main(void) {
	
	// Int values stored and used
	int a, b, c, d;

	// prompted user input
	printf("Enter four numbers, seperated by a space.\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	//Printing initial values
	printf("Initial Numbers:\na: %d\nb: %d\nc: %d\nd: %d\n\n", a, b, c, d);

	//printing calculated values
	printf("Calculated Values:\n");
	printf("a + b = %d\n", a + b);
	printf("c * d = %d\n", c * d);
  	printf("b / c = %d\n", b / c);
	printf("b mod c = %d\n", b % c);
	printf("(a*b)/(c+d) = %d\n", (a*b)/(c+d));


	return 0;
}
