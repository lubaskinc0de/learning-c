#include <stdio.h>

int main() {
    // break - выход из цикла
    // continue - пропуск итерации
    // goto - переход по метке

    int entered;

    for (scanf("%d", &entered); ; scanf("%d", &entered)) {
        if (entered == 0) {
            break;
        }

        if (entered % 2 != 0) {
            continue;
        }

        printf("You entered: %d\n", entered);
    }
}
