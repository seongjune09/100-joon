#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    // 위쪽 삼각형 (1 ~ N)
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");   // 공백 출력
        }
        for (int j = 1; j <= i; j++) {
            printf("*");   // 별 출력
        }
        printf("\n");
    }

    // 아래쪽 삼각형 (N-1 ~ 1)
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}