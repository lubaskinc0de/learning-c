#include "stdio.h"
#include "stdlib.h"
#include <time.h>
#include "math.h"

// генерация псевдослучайных чисел и функции стандартной библиотеки

/*
 * int abs(int) - модуль числа
 * double fabs(double) - модуль вещ. числа
 *
 * double round(double) - округление вещ. числа до ближайшего целого
 * double floor(double) - округление вещ. числа до нижнего целого
 * double ceil(double) - округление вещ. числа до высшего целого
 * double trunc(double) - отбрасывание дробной части
 *
 * double sqrt(double) - вычисление квадратного корня вещ. числа
 * double cbrt(double) - вычисление кубического корня вещ. числа
 * double pow(double x, double y) - возведение числа x в степень y
 * double exp(double) - вычисление экспоненты от вещ. значения
 * double log(double) - вычисление натурального логарифма
 * double log2(double) - вычисление логарифма по основанию 2
 * double log10(double) - вычисление десятичного логарифма
 *
 * double sin(double) - вычисление синуса угла, заданного в радианах
 * double cos(double) - вычисление косинуса угла, заданного в радианах
 * double tan(double) - вычисление тангенса угла, заданного в радианах
 * double asin(double) - вычисление арксинуса угла (возвращает радианы)
 * double acos(double) - вычисление арккосинуса угла (возвращает радианы)
 * double atan(double) - вычисление арктангенса угла (возвращает радианы)
 */

int main() {
    // верхняя граница рандома - RAND_MAX

    time_t t = time(NULL); // время в секундах

    srand(t);

    int r_1 = rand(); // rand() будет всегда отдавать одинаковую последовательность значений если не задать seed
    int r_2 = rand(); // с помощью функции srand()

    int range = 10;

    int rand_range = rand() % range;

    double range_float = (double)rand() / (double)RAND_MAX; // диапазон от [0;1]. Генерация вещ. числа

    printf("%d %d %d %lf %lf", r_1, r_2, rand_range, range_float * 10, sqrt(2));
}