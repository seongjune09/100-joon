#include <stdio.h>

int main(void) {
    int X, N;
    scanf("%d", &X);   // 총 금액
    scanf("%d", &N);   // 물건 종류 수

    int sum = 0;
    for (int i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        sum += a * b;  // 물건 가격 × 개수 누적
    }

    if (sum == X)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}