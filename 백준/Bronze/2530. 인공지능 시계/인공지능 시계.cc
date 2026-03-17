#include <stdio.h>

int main() {
    int A, B, C;
    int D;

    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);

    C += D;

    // 초 → 분
    B += C / 60;
    C %= 60;

    // 분 → 시
    A += B / 60;
    B %= 60;

    // 시 → 24시간
    A %= 24;

    printf("%d %d %d\n", A, B, C);

    return 0;
}