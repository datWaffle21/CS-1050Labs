#include <stdio.h>

void printArray(int array[], int size);
int initializeArray(int array[], int begin, int end, int increment);

void printArray(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        if(array[i] != -1) printf("%d, ", array[i]);
    }
    printf("\n");
}

int initializeArray(int array[], int begin, int end, int increment) {
    int index = 0;
    for(int i = begin; i <= end; i += increment) {
        array[index] = i;

        index++;
    }

    for(int i = index; i < 256; i++) {
        array[i] = -1;
    }

    return index;
}

int main(void) {

    int a[256];

    printf("The length of the array is: %d\n", initializeArray(a, 0, 20, 2));

    printArray(a, sizeof(a)/sizeof(a[0]));


    return 0;
}