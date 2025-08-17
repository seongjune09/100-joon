#include <stdio.h>

int main() {
    int num, remainder[42] = {0};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        remainder[num % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (remainder[i] == 1) count++;
    }

    printf("%d\n", count);
    return 0;
}