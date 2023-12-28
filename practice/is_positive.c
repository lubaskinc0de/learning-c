#include "stdio.h"
#include "stdbool.h"

int is_positive(int arg) {
    if (arg <= 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int digit;

    int res = scanf("%d", &digit);

    if (res != 1) {
        printf("Error!");
        return 1;
    }

    bool is_pos = is_positive(digit);

    if (is_pos) {
        printf("Positive!");
    } else {
        printf("Non positive!");
    }

    return 0;
}
