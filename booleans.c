#include "stdio.h"
#include "stdbool.h"

int main() {
    // true - 1
    // false - 0

    _Bool false_var = 0;
    _Bool true_var = 1;

    bool fl_view = true; // более удобная запись

    printf("False = %d; True = %d; Size of bool %d\n", false_var, true_var, sizeof(_Bool)); // 0, 1, 1
    printf("Fl view = %d\n", fl_view); // 1

    /*
     * Операции сравнения
     *
     * ==
     * !=
     * >
     * <
     * >=
     * <=
     *
     * Логические операции
     *
     * && - И
     * || - ИЛИ
     * ! - не
     */

    printf("%d; %d; %d", 1 && 1, 1 || 0, !1); // 1, 1, 0


    return 0;
}