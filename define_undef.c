#include "stdio.h" // <- директива макропроцессора

#define MENU_TRANSL 1 // макрос
// #define MENU_TRANSL 10 // так переопределить нельзя
#undef MENU_TRANSL // нужно прописать undef
#define MENU_TRANSL 10 // и переопределить
#define MENU_ADD    2
#define MENU_EXIT   3
#define MENU_FMT    "You have selected menu item %d\n"
#define PRINT_SELECTED printf(MENU_FMT, item) // тут при макро вызове подставится printf и он будет выполнен

/*
 * #<директива> <макроимя> <тело макроса> // ; тут не нужно
 */


int main() {
    int item;

    scanf("%d", &item);

    PRINT_SELECTED;

    switch (item) {
        case MENU_TRANSL: // после case могут быть прописаны ТОЛЬКО константы вычисляемые во время компиляции, которые компилятор знает изначально
            printf("Translate word");
            break;
        case MENU_ADD: { // идеальный кейс для макросов
            printf("Add words");
            break;
        }
        case MENU_EXIT: { // тут происходит макро-вызов - вызов макроса
            printf("Exit");
            return 0;
        }
        default: {  // перед компиляцией, на этапе обработки кода препроцессором,
                    // вместо макро вызовов будут подставлены те значения которые мы задали
            printf("Incorrect!");
        }
    }

    return 0;
}
