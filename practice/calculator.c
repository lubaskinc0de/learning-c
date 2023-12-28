#include "stdio.h"

int main() {
    char op;
    int a, b;
    int result;

    printf("Please, enter the operation code (+, -, *, /):\n");
    int input = scanf("%c", &op);

    printf("Now, enter first and second operands:\n");
    int operands_input = scanf("%d %d", &a, &b);

    if (operands_input != 2 || input != 1) {
        printf("Invalid input!");
        return 1;
    }

    switch (op) {
        case '+': {
            result = a + b;
            break;
        }
        case '-': {
            result = a - b;
            break;
        }
        case '*': {
            result = a * b;
            break;
        }
        case '/': {
            result = a / b;
            break;
        }
        default: {
            printf("Invalid operator!");
            return 1;
        }
    }

    printf("Result is: %d", result);
}
