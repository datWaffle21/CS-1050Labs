#include <stdio.h>
#include <stdlib.h>

void getString(char* str);
char* revStr(char* str);
int len(char* str);

void getString(char* str) {
    printf("Please enter a string with no spaces or newlines: ");
    scanf("%s", str);
}

char* revStr(char* str) {
    char* reverse = malloc(sizeof(char) * len(str));
    int begin, end;

    end = len(str) - 1;

    for(begin = 0; begin < len(str); begin++) {
        *(reverse + begin) = *(str + end);
        end--;
    }

    *(reverse + begin) = '\0';

    return reverse;
}

int len(char* str) {
    int i = 0;
    while((*(str + i)) != '\0') {
        i++;
    }
    return i;
}

int main(void) {
    printf("*** Welcome to prelab 9 ***\n");

    char* str = malloc(256 * sizeof(char));

    getString(str);

    printf("You entered: %s\n", str);

    printf("The length of that string is: %d\n", len(str));

    str = revStr(str);
    
    printf("The reversed string is: %s\n", str);

    return 0;
}