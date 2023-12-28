#include "stdio.h"
#include "math.h"

int main() {
    signed int a, b, c;

    printf("Please, enter a, b, c:\n");
    int res = scanf("%d %d %d", &a, &b, &c);

    if (res != 3) {
        printf("Wrong input!");
        return 1;
    }

    printf("You entered a = %d, b = %d, c = %d\n", a, b, c);

    signed int D = b*b - 4*a*c;

    printf("Discriminant is %d\n", D);

    if (D < 0) {
        printf("No roots!");
    } else if (D == 0) {
        printf("One root: %f", ( -b + sqrt(D) ) / (2*a) );
    } else {
        printf("Two roots, x1 = %f; x2 = %f", (-b + sqrt(D)) / (2*a), (-b - sqrt(D)) / (2*a));
    }

    return 0;
}
