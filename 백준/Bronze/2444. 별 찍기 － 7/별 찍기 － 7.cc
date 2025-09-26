#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    // 위쪽 (1 ~ n줄)
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 아래쪽 (n-1 ~ 1줄)
    for (int i = n - 1; i >= 1; i--) {
        // 공백 출력
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}