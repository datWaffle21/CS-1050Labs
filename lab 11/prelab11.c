/*
 * CS1050
 * Fall 2020
 * Prelab 11 
 * by Jim Ries
 */
#include <stdio.h>

// Symbolic Constants
#define FILENAME "DnDMonsterScores.csv"

int lenOfFile(FILE* _fp);

int lenOfFile(FILE* _fp) {
	int count = 0;
	char c;

	for(c = getc(_fp); c != EOF; c = getc(_fp)) { 
		if(c == '\n') {
			count++;
		}
	}
	return count;
}

// Main
int main(void)	{
	FILE * fp;
	char name[256];

	fp = fopen(FILENAME,"r");
	
	// Only move on if we are able to open the file
	if (NULL!=fp) {

		// Throw away the first line
        	fgets(name,255,fp);
        	printf("Header line was: %s\n",name);

		int count = 0;
		int totalAC = 0;
		int totalHP = 0;
        	// Read the important data from the next line
		while (fp && !feof(fp)) {
            		int ac,hp;
			char useless[100];

            		// Only print if we read the 3 fields we expect
            		if (4==fscanf(fp," %[^,],%d,%d,%[^\n]",name,&ac,&hp, useless)) {
                		printf("%d) \"%s\" : AC=%d,HP=%d\n",count + 1 ,name,ac,hp);
				totalAC += ac;
				totalHP += hp;
            		}
			count++;
        	}
		count--;
		printf("Total monster count = %d\nAverage AC = %.2lf\nAverage HP = %.2lf\n", count, (float) totalAC / (int) count, (float) totalHP / (float) count);

    	}

    // If you open a file, you had better close it
    fclose(fp);
}
