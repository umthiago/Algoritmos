#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1 = 12, num2 = 18;
    printf("MMC de %d e %d é %d\n", num1, num2, mmc(num1, num2));
    return 0;
}
