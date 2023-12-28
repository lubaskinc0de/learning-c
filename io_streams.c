#include <locale.h>
#include "stdio.h"

int main() {
    /*
     * Стандартные потоки ввода-вывода и соответствующие им функции из stdio.h
     *
     * stdin - getchar(), scanf()
     * stdout - putchar(), printf()
     * stderr - perror()
     * */

    __attribute__((unused)) char *locale = setlocale(LC_ALL, ""); // чтобы нормально русский язык работал

    int age;
    int height;
    int weight;

    /*
    printf("Введите символ:\n");

    int some_char = getchar();
    int code = putchar(some_char); // код символа

    printf("%d\n", code);
    */

    printf("Введите ваш возраст: ");
    scanf("%d", &age); // сканируем число, передаем указатель на переменную, число записывается в переменную

    printf("Введите ваш рост и вес: ");
    scanf("%d %d", &height, &weight); // пробел означает пробельный символ: _, \n, TAB

    printf("Инфо о человеке:\n  Возраст: %d\n  Рост: %d\n  Вес: %d\n\n", age, height, weight);

    int var_i = -1283;
    double var_x = 54.34675;

    printf("[%10d]\n", var_i); // флаги спецификаторов
    printf("[%10f]\n", var_x); // выравнивание числа по правой границе поля из 10 символов

    printf("[%12.7d]\n", var_i); // 12 - ширина поля, 7 - количество символов которое должно быть в выводе значения
    printf("[%12.2f]\n", var_x); // 12 - ширина поля, 2 - количество цифр после точки

    /*
[     -1283]
[ 54,346750]

[    -0001283]
[       54,35]
     */

    return 0;
}
