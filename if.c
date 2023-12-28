#include "stdio.h"

int main() {
    int weight;

    int res = scanf("%d", &weight);

    if (res != 1) {
        printf("Error!");
        return 1;
    }

    if (weight <= 30) {
        printf("Very low!");
    } else if (weight <= 40) {
        printf("Low!");
    } else if (weight <= 80) {
        printf("Normal");
    } else if (weight <= 100) {
        printf("High!");
    } else if (weight <= 150) {
        printf("Very high!");
    } else printf("Super high!");
}