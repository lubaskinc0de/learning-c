#include "stdio.h"

int main() {
    int option;

    printf("1. Cat\n"
           "2. Dog\n"
           "3. Bird\n"
           "4. Fish\n");

    if (scanf("%d", &option) != 1) {
        printf("err");
        return 1;
    }

    switch (option) {
        case 1: {
            printf("cat!");
            break;
        }
        case 2: {
            printf("dog!");
            break;
        }
        case 3: {
            printf("bird!");
            break;
        }
        case 4: {
            printf("fish!");
            break;
        }
        default: {
            printf("invalid option!");
            return 1;
        }
    }
}
