#include <stdio.h>

void getIntAndFloat(int* int_p, float* float_p);
void getString(char string[]);
void getArraySize(int* size);
void fillArray(int a[], int size);
void printArrayElements(int array[], int arraySize);

void getIntAndFloat(int* int_p, float* float_p) {
    scanf("%d %f", int_p, float_p);
}

void getString(char string[]) {
    scanf("%s", string);
}

void getArraySize(int* size) {
    scanf("%d", size);
}

void fillArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("\tEnter integer #%d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void printArrayElements(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        printf("\tarray[%d] = %d\n", i, array[i]);
    }
}

int main(void) {

    printf("***********************\n");
    printf("* Welcome to Prelab 8 *\n");
    printf("***********************\n");

    int myInt;
    float myFloat;
    char myString[255];
    int arraySize;

    printf("Please enter an integer followed by a space followed by a float: \n");
    getIntAndFloat(&myInt, &myFloat);

    printf("\nPlease enter a string without spaces and then hit enter.\n");
    getString(myString);

    printf("\nHow many integers would you like to input? ");
    getArraySize(&arraySize);

    int array[arraySize];

    fillArray(array, arraySize);

    printf("*************\n");

    printf("You entered %d, %f, %s\n", myInt, myFloat, myString);
    printf("Array elements:\n");
    printArrayElements(array, arraySize);


    printf("\n");

    return 0;
}