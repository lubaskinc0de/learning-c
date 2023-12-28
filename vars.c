#include "stdio.h"

int main() {
    // <тип> <имя>;

    /*
     * Типы данных
     * char[1] - 1 байт
     * short[2]
     * int[4]
     * long[8]
     * long long [8]
     * float[4]
     * double[8]
     * long double[10]
     * */

    unsigned char my_age; // unsigned (беззнаковое число [0;255]) signed (знаковое число [-128;127])

    my_age = 15;

    printf("My age: %d\n", my_age);

    my_age = 16;

    printf("My new age: %d", my_age);

    return 0;
}
