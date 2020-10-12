/*
 *	Noah Wimmer
 *	njwg7g
 *	cs 1050
 *	lab section: a
 *	lab 7
 *
 *
 */
#include <stdio.h>
#define ROWS 3
#define COLS 12

void printGrade(int grade, int class, int array[][3]);
void printArray(int rows, int cols, int array[][cols]);

void printGrade(int grade, int class, int array[][3]) {
	if(class == 1050) {
		if(grade >= array[0][0]) printf("A ");
		else if(grade >= array[1][0]) printf("B ");
		else if(grade >= array[2][0]) printf("C ");
		else if(grade >= array[3][0]) printf("D ");
		else printf("F ");
	}
	if(class == 1500) {
		if(grade >= array[0][1]) printf("A ");
                else if(grade >= array[1][1]) printf("B ");
                else if(grade >= array[2][1]) printf("C ");
                else if(grade >= array[3][1]) printf("D ");
                else printf("F ");	
	}
	if(class == 1000) {
		if(grade >= array[0][2]) printf("A ");
                else if(grade >= array[1][2]) printf("B ");
                else if(grade >= array[2][2]) printf("C ");
                else if(grade >= array[2][3]) printf("D ");
                else printf("F ");
	}
}

void printGrades(int rows, int cols, int array[][cols], int cutoffs[][3]) {
	for(int i = 0; i < cols; i++) {
		printf("Student %d: ", i);
		for(int j = 0; j < rows; j++) {
			int class;
			if(j==0) class = 1050;
			if(j==1) class = 1500;
			if(j==2) class = 1000;
			printGrade(array[j][i], class, cutoffs);
							
		}
		printf("\n");
	}
	printf("\n");
}

void printArray(int rows, int cols, int array[][cols]) {
	for(int i = 0; i < rows; i++) {
		printf("Row %d: ", i);
		for(int j = 0; j < cols; j++) {
			printf("%d ", array[i][j]);	
		}
		printf("\n");
	}
}

int main(void) {

	int grades[][COLS] = {
		{72, 95, 93, 98, 99, 47, 97, 85, 96, 94, 98, 76},
		{68, 88, 97, 77, 92, 32, 99, 95, 91, 90, 98, 82},
		{62, 95, 86, 98, 90, 24, 85, 91, 99, 85, 90, 98}
	};

	int cutoffs[][3] = {
		{85, 90, 90},
		{75, 80, 75},
		{60, 70, 55},
		{50, 60, 40}

	};

	
	printf("Here are the scores: \n");
	printArray(ROWS, COLS, grades);
	
	printf("\nHere are the grade cutoffs: \n");
	printArray(4, 3, cutoffs);

	printf("\nHere are the grades: \n");
	printGrades(ROWS, COLS, grades, cutoffs);

	return 0;
}
