/*
 *	Noah Wimmer
 *	njwg7g
 *	cmp_sc 1050
 *	lab 6
 *
 */

#include <stdio.h>

void multArrays(int array1[], int array2[], int out[], int size);
int initArray(int a[], int begin, int end, int increment);
void printArray(int array[], int size);
void specialPrint(int array1[], int array2[], int array3[], int minSize, int maxSize);
int min(int a, int b);
int max(int a, int b);

int min(int a, int b) {
	return (a < b) ? a : b;
}

int max(int a, int b) {
	return (a < b) ? b : a;
}

void printArrays(int array1[], int array2[], int array3[], int size) {
	
	/*    
	for(int i = 0; i < size; i++) {
        	if(array[i] != -1) printf("%d ", array[i]);
    	}
	printf("\n"); */

	for(int i = 0; i < size; i++) {
		printf("\tArray 1 Element %d = %d\tArray 2 Element %d = %d\tArray 3 Element %d = %d\n", i, array1[i], i, array2[i], i, array3[i]);
	}
}

void specialPrint(int array1[], int array2[], int array3[], int minSize, int maxSize) {

	for(int i = 0; i < minSize; i++) {
		printf("\tArray 1 Element %d = %d\tArray 2 Element %d = %d\tArray 3 Element %d = %d\n", i, array1[i], i, array2[i], i, array3[i]);		
	}
	for(int i = minSize; i < maxSize; i++) {
		printf("\tArray 1 Element %d = %d\n", i, array1[i]);
	}

}
// returns the length of the initialized array
int initArray(int a[], int begin, int end, int increment) {

    int index = 0;
	if(begin < end) {
		for(int i = begin; i <= end; i += increment) {
        		a[index] = i;

       			index++;
    		}
	} else {
		for(int i = begin; i >= end; i += increment) {
			a[index] = i;
			index++;	
		}
	}
	
	// fills the rest of the array with dummy data
	for(int i = index; i < 256; i++) {
        	a[i] = -1;
    	}

    return index;
}	


void multArrays(int array1[], int array2[], int out[], int size) {

	for(int i = 0; i < size; i++) {
		out[i] = array1[i] * array2[i];
	}

}

int main(void) {

	// my code goes define, init, mult, print for each array group
	
	//define 3 arrays
	int a[256];
	int b[256];
	int out[256];

	// fill 2 arrays
	int len = initArray(a, 2, 20, 2);
	initArray(b, 4, 40, 4);
	
	//mult a and b
	multArrays(a, b, out, len);


	//print data
	printf("First Arrays:\n");
	printArrays(a, b, out, len);

	//init second arrays
	len = initArray(a, 40, 0, -4);
	initArray(b, 99, 9, -9);

	multArrays(a, b, out, len);

	//print second arrays data
	printf("Second Arrays:\n");
	printArrays(a, b, out, len);	


	//bonus
	len = initArray(a, 15, 1, -1);
	int lenB = initArray(b, 5, 50, 5);

	multArrays(a, b, out, len);
	
	printf("Third Arrays:\n");
	specialPrint(a, b, out, min(len, lenB), max(len, lenB)); 

	return 0;
}
