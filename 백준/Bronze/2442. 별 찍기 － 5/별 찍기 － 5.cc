#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }
        for (int star = 0; star < 2 * i + 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}