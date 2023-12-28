#include "stdio.h"

int main() {
    int digit;

    int res = scanf("%d", &digit);

    if (res != 1) {
        printf("Error!");

        return 1;
    }

    printf("Is odd: %d", digit % 2 == 0);

    return 0;
}
