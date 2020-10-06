#include <stdio.h>

int main(void) {
	
	int i = 1;

	while(i < 21) {
		printf("%d - ", i);
		if(i % 2 == 0) {
			printf("Even\n");
		} else {
			printf("Odd\n");
		}

		i++;	
	}


	return 0;


}
