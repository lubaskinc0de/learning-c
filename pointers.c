#include <stdio.h>

/*
 * Указатели
 *
 * Память:   ОБЛАСТЬ 1                  ОБЛАСТЬ 2                                       ОБЛАСТЬ 3
 *
 * Адрес:    1  2  3  4 ...     ...      104  105   106   107  ...  ...   ...  ... ...  32100  32101   ... ...
 * Значение: x  x  x  x                 | 100                | <- f, 4 ячейки           | 5 | <- переменная d (1 байт)
 *
 * Где x - 1 байт
 *
 * Когда мы в своей программе обьявим переменную char d = 5, для нее автоматически будет выделена область в памяти
 * Размером в 1 байт, она будет помещена в ячейку под номером 32100
 *
 * Когда мы обьявим еще переменную int f = 100, для нее будет выделено несколько ячеек (возьмем за основу что int занимает 4 байта)
 * Она занимает ячейки под номером 104, 105, 106 и 107, но ее адресом будет считаться первая ячейка - 104
 *
 * По умолчанию переменные обычно помещаются в разные области памяти, как на схеме выше.
 *
 * Под каждую переменную в программе отводится определенная область в памяти (1 ячейка или несколько)
 * И там хранится значение этой переменной
 *
 * Фактически, имена переменных обозначают определенную непрерывную область в памяти, в которой хранится значение
 * Раз это так, значит изменение значения в ячейках памяти автоматически приведет к изменению значения переменной
 * Но как мы можем изменить значение в памяти не используя саму переменную? С помощью указателей.
 *
 * Указатели служат для записи и считывания данных из произвольных ячеек в памяти
 * Указатель - это такая же целочисленная переменная, хранит она адрес ячейки памяти
 *
 * Если система 32 битная то под указатель отводится 4 байта
 * Если система 64 битная то под указатель отводится 8 байт
 *
 * Синтаксис указателей
 *
 * <тип данных> *<имя указателя>
 *
 * Тип данных тут не относится к указателю - он сам по себе целочисленный
 * Тип относится к тому, что мы в эту ячейку памяти хотим записывать/читать
 *
 * Пример:
 *
 * char d = 10;
 * char *ptr_d; // обьявляем указатель
 *
 * ptr_d = &d; // &d - получаем адрес переменной d в памяти и заносим его как значение в указатель
 *
 * char x = *ptr_d; // операция разыменования, читаем значение по адресу на который указывает указатель
 * *ptr_d = 100; // меняем значение в ячейке, на которую указывает указатель
 */

int main() {
    char d = 10;

//  char *d_ptr;
//  d_ptr = &d;

    char *d_ptr = &d;
    // инициализируем указатель, здесь у нас как раз таки происходит операция инициализации указателя
    // а не присваивания ячейке на которую он указывает значения
    // операция присваивания и операция инициализации это разные вещи

    *d_ptr = 100;

    printf("d = %d, ptr = %p, ptr value = %d", d, d_ptr, *d_ptr); // d = 100, ptr = 0061FF1B, ptr value = 100
}
