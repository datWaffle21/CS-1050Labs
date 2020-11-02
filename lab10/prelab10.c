/*
 * CS1050
 * Fall 2020
 * Prelab 10 Starter File
 * by Jim Ries
 */

// includes
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Symbolic Constants
#define S1 "Once there was a way to get back homeward"
#define S2 "\n\n\tYou get killed just for      \tlivin' in your\nAmerican skin."
#define S3 "In  these days, you can get no rice.  No razor blades, but you can get knife."
#define S4 "Now some guys they just give up living.  And start dying little by little, piece by piece.      "
#define STRINGCOUNT 4

// Prototypes
char*  KillWhiteSpace(char *s);
int compareStrings(char* x, char* y);

int compareStrings(char* x, char* y) {
    while (*x != '\0' || *y != '\0') { 
        if (*x == *y) { 
            x++; 
            y++; 
        } 
  
        // If two characters are not same 
        // print the difference and exit 
        else if ((*x == '\0' && *y != '\0') 
                 || (*x != '\0' && *y == '\0') 
                 || *x != *y) { 
            printf("Uequal Strings\n"); 
            return 0;
        } 
    }
    return 1; 
}

int len(char* s) {
    int count = 0;
    while(*(s + count) != '\0') count++;
    return count;
}

char* KillWhiteSpace(char* s) {
    // To keep track of non-space character count 
    int count = 0; 
  
    // Traverse the given string. If current character 
    // is not space, then place it at index 'count++' 
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') {
            s[count++] = s[i]; 
        } 
    }
    s[count] = '\0'; 
    return s; 
}

// Main
int main(void)
{
    char s[STRINGCOUNT][256]={S1,S2,S3,S4};

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings without whitespace ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,KillWhiteSpace(s[i]));
    }
}