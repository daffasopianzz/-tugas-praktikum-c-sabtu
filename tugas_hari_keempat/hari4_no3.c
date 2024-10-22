#include <stdio.h>

int main() {
    int n;

    printf("input nilai N: ");
    scanf("%i", &n);

    if (n > 50) {
        n = n - 25;
        // printf("\n");
    }
 
    n = n + 10;

    printf("Nilai N adalah %i", n);

    return 0;
}