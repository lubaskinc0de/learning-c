#include <stdio.h>

int main() {
    int n;
    printf("!n, enter n: ");
    scanf("%d", &n);
    printf("n is %d\n", n);

    int fac = 1;

    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    printf("!%d = %d", n, fac);
}
