#include "stdio.h"

int main() {
    unsigned int weight, height; // обьявление

    weight = 50; // присваивание
    height = 180;

    double koef = 0.5; // инициализация

    printf("weight = %d; height = %d; koef = %f\n", weight, height, koef);

    int dec, hex, oct;

    dec = 10UL; // unsigned (U) long (L)
    hex = 0xF; // unsigned int (by default)
    oct = 0777; // unsigned int (by default)

    printf("dec = %d; hex = %d; oct = %d\n", dec, hex, oct);
    printf("Size of double: %d, Size of unsigned int: %d", sizeof(double), sizeof(unsigned int));

    return 0;
}