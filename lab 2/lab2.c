#include <stdio.h>

int main(void) {

	int x, y;
	printf("Enter two numbers. 'x x'\n");
	scanf("%d %d", &x, &y);

	printf("You entered: %d %d\n", x, y);
	printf("x + y = %d\n", (x + y));
	printf("x * y = %d\n", (x * y));
	printf("(x + 1) * y = %d \n", (x+1) * y);
	printf("The original numbers are: %d, %d\n", x, y);
	return 0;
}
