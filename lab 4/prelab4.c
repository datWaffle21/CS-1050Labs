#include <stdio.h>
#include <math.h>

int main(void) {

    int limit;

    printf("Please enter a limit: ");
    scanf("%d", &limit);

    for(int i = 0; i <= sqrt((double) limit); i++) {
        (i * i) + 3 == 52 ? printf("Dabo!\n"): printf("");
        printf("%d\n", i * i);
    }
    return 0;
}