#include <stdio.h>

int main() {
    int pass_code = 13;
    int entered;

    do {
        scanf("%d", &entered);
    } while (entered != pass_code);

    printf("Access allowed.");
}