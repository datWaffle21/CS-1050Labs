#include <stdio.h>
#define COLS 3
#define ROWS 12

void printArray(int a[][COLS], int rows);
int printRowAverage(int a[][COLS], int row);
int printColAverage(int a[][COLS], int col);

int printColAverage(int a[][COLS], int col) {
    float total = 0;
    for(int i = 0; i < ROWS; i++) {
        total += a[i][col];
    }
    float average = total / 12.0;
    printf("%f\n", average);
    return average;
}

int printRowAverage(int a[][COLS], int row) {
    float total = 0;
    for(int i = 0; i < COLS; i++) {
        total += (float) a[row][i];
    }
    float average = (float) (total / 3.0);
    printf("%f\n", average);
    return average;
}


//prints a square array
void printArray(int a[][COLS], int rows) {
    for(int i = 0; i < rows; i++) {
        printf("Row %d: ", i);
        for(int j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int a[ROWS][COLS] = {
        {72, 68, 62},
        {95, 88, 95},
        {93, 97, 86},
        {98, 77, 98},
        {99, 92, 90},
        {47, 32, 27},
        {97, 99, 85},
        {85, 95, 91},
        {96, 91, 99},
        {94, 90, 85},
        {98, 98, 90},
        {76, 82, 98}
    };

    printf("Heres the matrix:\n");
    printArray(a, ROWS);

    printf("\nHere are the row averages:\n");
    for(int i = 0; i < ROWS; i++) {
        printRowAverage(a, i);
    }

    printf("Here are the column averages:\n");
    for(int i = 0; i < COLS; i++) {
        printColAverage(a, i);
    }


    return 0;
}