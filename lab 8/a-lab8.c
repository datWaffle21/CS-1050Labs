/*
 * Noah Wimmer
 * Lab 8
 * Section A
 * 10/19/20
 * CS 1050
 */
#include <stdio.h>

void getTwoStrings(char str1[], char str2[]);
void getInts();
void printOutput(char str1[], char str2[], int arr[], int arrSize);

void getTwoStrings(char str1[], char str2[]) {
	printf("Please enter a string\n");
	scanf("%s", str1);
	printf("Please enter another string.\n");
	scanf("%s", str2);
}

void getInts(int arr[], int size) {
	printf("Please enter positive integers, -1 to end\n");
	int input;
	int index = 0;
	do {
		printf("\tElement[%d]: ", index);
		scanf("%d", &input);
		arr[index] = input;
		index++;		
	} while (input != -1);

	for(int i = index; i < size; i++) {
		arr[i] = -1;
	}
}

void printOutput(char str1[], char str2[], int arr[], int arrSize) {
	printf("\n**************\n");
	printf("The first string you entered:\n%s\n", str1);
	printf("The second string you entered:\n%s\n", str2);
	
	printf("Array elements you entered:\n");
	for(int i = 0; i < arrSize; i++) {
		if(arr[i] != -1) printf("\tArray[%d] = %d\n", i, arr[i]);
	} 
}

int main(void) {
	printf("***********************\n");
   	printf("* Welcome to Lab 8 *\n");
   	printf("***********************\n");
	
	int myInts[256];
	char str1[256], str2[256];

	getTwoStrings(str1, str2);
	getInts(myInts, 256);

	printOutput(str1, str2, myInts, 256);
		
	return 0;
}
