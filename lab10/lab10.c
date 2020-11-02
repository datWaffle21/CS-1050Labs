/*
 * CS1050
 * Fall 2020
 * Lab 10
 */

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define CLEARTEXT \
"It's Christmastime in Washington\a\nThe Democrats rehearsed \b\n"\
"Gettin' into gear for four more years\nThings not gettin' worse"\
"\"\\\?\n\n\t\t- Steve Earle"

// Prototypes
void encrypt(char *in, int displacement);

// Main
int main(void) {

	char string[255] = CLEARTEXT;
	
	printf("*** Original String ***\n");
	printf("%s\n", string);


	printf("\n*** Modified String ***\n");
	encrypt(string, 2);
	printf("\n");	
}

// Function implementations
void encrypt(char *s, int displacement) {
	//encrypt
	for(int i = 0; s[i]; i++) {
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\b') {
			printf("%c", s[i]);
		} else {
			s[i] += displacement;
			printf("%c", s[i]);

		}
	}
	printf("\n\n");
	//decrypt
	printf("*** Decrypted String ***\n");
	for(int i = 0; s[i]; i++) {		
		if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\b') {
			printf("%c", s[i]);
		} else {
			s[i] -= displacement;
			printf("%c", s[i]);
		}
	}
}
