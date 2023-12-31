/*
 * Битовые операции
 *
 * ИЛИ - проводит операцию ИЛИ над битами двух чисел
 * И - проводит операцию И над битами двух чисел
 * НЕ - инвертирует бит
 * ИСКЛЮЧАЮЩЕЕ ИЛИ (XOR) -
 *
 *
 * x | y | XOR
 * 0   0    0
 * 0   1    1
 * 1   0    1
 * 1   1    0
 *
 * >> - сдвигает биты вправо (заполняя нулями)
 * << - сдвигает биты влево
 *
 * 00101000 >> 2 = 00001010 // эквивалентно делению на 4
 * 00101000 << 2 = 10100000 // эквивалентно умножению на 4
 */

#include "stdio.h"

int main() {
    unsigned char var_1 = 153; // 10011001
    unsigned char not_var_1 = ~var_1; // НЕ; 01100110

    unsigned char var_2 = 5; // 00000101 // тут второй бит включен
    unsigned char var_3 = 4; // 00000100 // битовая маска которая определяет включен ли второй бит, он включен если digit & mask == mask

    unsigned char var_2_3 = var_2 & var_3; // 00000100

    unsigned char flags = 8; // 00001000
    unsigned char mask = 5; //  00000101

    flags = flags | mask; // включаем второй и нулевой бит; 00000101

    unsigned char flags_2 = 9;// 00001001
    unsigned char mask_2 = 1; // 0000001

    flags_2 = flags_2 ^ mask_2; // 00001000

    printf("%d\n", not_var_1); // 102
    printf("%d\n", var_2_3); // 4
    printf("%d\n", flags); // 13
    printf("%d\n", flags_2); // 8
}
