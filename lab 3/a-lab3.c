#include <stdio.h>


int main(void) {


	for(int i = 18; i > 1; i--) {

		printf("%d", i);

		if(i % 3 == 0) {
			printf("***\n");
			continue;
		}
		else if(i == 11) {
			printf("this one goes to ELEVEN\n");
			continue;
		}

		printf("\n");
	
	}



	return 0;
}
