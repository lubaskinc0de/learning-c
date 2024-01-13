#include <stdio.h>

int main() {
    int s = 0;

    for (int i = 1; i <= 10; i++) {
        for (int j = 7; j >= 5; j--) {
            if (i-j > 0) {
                goto outer; // переход по метке
            }

            s += i-j;
        }
    }
    outer: printf("S = %d\n", s); // выход из циклов
}
