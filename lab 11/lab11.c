#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fight.h"
#define FILENAME "monster.csv"

int main(int argc, char * argv[]) {
	//./a.out file 1 2
	//SetSeed(0);
	FILE* fp;
	char name[256];

	if(argc != 4) {
		printf("Syntax:\na.out combatant_file combatant1_name combatant2_name\n");
		return 1;
	}

	fp = fopen(argv[1], "r");
	
	if(fp != NULL) {
		//only if the file pointer is not null
		fgets(name, 255, fp);
		//printf("Header line was: %s\n", name);
	
		//bools if monster1 and monster2 exist
		int exists1 = 0;
		int exists2 = 0;

		int ac1, hp1, th1, ac2, hp2, th2;
		char* m1_atk1 = malloc(50 * sizeof(char));
		char* m1_atk2 = malloc(50 * sizeof(char));
		char* m2_atk1 = malloc(50 * sizeof(char));
		char* m2_atk2 = malloc(50 * sizeof(char));
		while(fp && !feof(fp)) {
			int temp_ac, temp_hp, temp_th;
			char* temp_atk1 = malloc(50 * sizeof(char));
			char* temp_atk2 = malloc(50 * sizeof(char));
			fscanf(fp," %[^,],%d,%d,%d,%[^,],%[^\n]", name, &temp_ac, &temp_hp, &temp_th, temp_atk1, temp_atk2);
			//if(ac1 && ac2 && hp1 && hp2 && th1 && th2 && strcmp("butt", m1_atk1) && strcmp("Butt", m1_atk2) && strcmp("fart", m2_atk1) && strcmp("butt", m2_atk2)){} 
			//printf("name1: %s\tname2: %s\n", argv[2], argv[3]);		
			//printf("test: %s\n", name);
			if(strcmp(argv[2], name) == 0) {
				exists1 = 1;
				ac1 = temp_ac;
				hp1 = temp_hp;
				th1 = temp_th;
				strcpy(m1_atk1, temp_atk1);
				strcpy(m1_atk2, temp_atk2);
			} 
			if(strcmp(argv[3], name) == 0) {
				exists2 = 1;
				ac2 = temp_ac;
				hp2 = temp_hp;
				th2 = temp_th;
				strcpy(m2_atk1, temp_atk1);
				strcpy(m2_atk2, temp_atk2);
			}

		}
		if(exists1 == 1 && exists2 == 1) {
			Fight(argv[2], ac1, hp1, th1, m1_atk1, m1_atk2, argv[3], ac2, hp2, th2, m2_atk1, m2_atk2);
		} else if(exists1 == 1 && exists2 == 0) {
			printf("Could not find combatant %s\n", argv[3]);
		} else if(exists1 == 0 && exists2 == 1) {
			printf("Could not find combatant %s\n", argv[2]); 
		} else {
			printf("Could not find either combatant\n");
		}
	} else {
		fprintf(stderr, "Had trouble opening file \"%s\".\n", argv[1]);
	}
	fclose(fp);
}
