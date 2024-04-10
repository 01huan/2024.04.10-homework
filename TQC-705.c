#include <stdio.h>
#include <string.h>

int main() {
    char products[3][21], test[5][21];
    int prize[3], total=0;

    for (int i=0; i<3; i++) {
        scanf("%s %d", &products[i], &prize[i]);
    }

    for (int i=0; i<5; i++) {
        scanf("%s", &test[i]);
        for (int j=0; j<3; j++) {
            if (!(strcmp(products[j], test[i]))) {
                total += prize[j];
            }
        }
    }
    printf("%d", total);
}