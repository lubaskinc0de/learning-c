#include "stdio.h"

int main(void) {
    long long var_lli;
    float var_float;
    char byte_1;
    char byte_2;

    scanf("%c, %c", &byte_1, &byte_2); // пример ввода: A, B
    scanf("%lld", &var_lli); // корректное считывание long long
    scanf("%f", &var_float); // считывание флоат

    printf("var_lli = %lld; byte 1, 2 = %c, %c; var_float = %.2f\n", var_lli, byte_1, byte_2, var_float);

    unsigned int price = 0;
    double weight = 0.0;

    scanf("%*llu; %u; %lf", &price, &weight); // lf - считывание double, %*llu (unsigned long long) пропуск значения которое попадет под тип llu

    printf("price = %u; weight = %lf", price, weight);
}
