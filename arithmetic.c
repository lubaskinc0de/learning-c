#include "stdio.h"

int main() {
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = 7 / 2; // 3, дробная часть отброшена
    double res_2 = -9 / 2; // -4, дробная часть отброшена (при делении целых всегда получаем целое)
    float res_3 = a / c; // -0.92, если хоть одно число - вещественное, получим вещественный результат
    double res_4 = d / b; // -0.65
    double res_5 = (double)10 / -3; // -3.33 (приведение целого числа 10 к типу дабл)

    printf("res 5 = %f; res 2 = %f; res 1 = %d; res 3 = %f; res 4 = %f\n", res_5, res_2, res_1, res_3, res_4);

    int res_6 = 10 % 3; // 1, остаток от деления

    b++; // 11, инкремент. Значение выражения будет равно 10 в постфиксной форме

    int res_7 = b;
    b--;

    int res_8 = --b; // 9, декремент. Значение выражения будет равно 9 в префиксной форме.

    printf("res_6 = %d; res_7 = %d; res_8 = %d\n", res_6, res_7, res_8);

    b++;
    int res_9 = b += 1; // 11
    b--;
    int res_10 = b /= 2; // 5
    b += 5;
    int res_11 = b *= 2; // 20
    b -= 10;
    int res_12 = b %= 3; // 1

    printf("res_9 = %d; res_10 = %d; res_11 = %d; res_12 = %d", res_9, res_10, res_11, res_12);

    return 0;
}
