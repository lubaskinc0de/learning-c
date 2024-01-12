#include <stdio.h>
#include <stdbool.h>

#define END_INPUT  0

int main() {
    bool is_typing = true;
    int pow = 1;

    printf("Enter digits and they be multiplied by others, enter 0 for stop.\n");

    while (is_typing) {
        int digit;

        scanf("%d", &digit);

        if (digit == END_INPUT) {
            is_typing = false;
        } else {
            pow *= digit;
        }
    }

    printf("Pow: %d", pow);
}
