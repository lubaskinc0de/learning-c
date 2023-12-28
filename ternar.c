#include "stdio.h"

int main() {
    int digit;

    scanf("%d", &digit);

    printf("%s", digit >= 5 ? "Digit greater than five" : "Digit less than five"); // тернарник

    return 0;
}