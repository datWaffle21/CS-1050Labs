//Noah Wimmer
//njwg7g
//cs 1050
//Lab 4

#include <stdio.h>

int main(void) {

	int attempts = 0;
	int start = -1;
	int limit = -1;

	do{
		attempts > 0 ? printf("Please enter an integer 1-100\nEnter Start: "):printf("Enter Start: ");
		scanf("%d", &start);
		attempts++;
	} while(start < 1 || start > 100);

	attempts = 0;
	do{
		attempts > 0 ? printf("Please enter an integer 1-100.\nEnter Limit: "): printf("\nEnter Limit: ");
		scanf("%d", &limit);
		attempts++;
	} while(limit < 1 || limit > 100);


	printf("\n");

	for(int i = start; i <= limit; i++) {
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}
