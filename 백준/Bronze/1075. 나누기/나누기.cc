#include <stdio.h>

int main() {
    int N, F;
    scanf("%d %d", &N, &F);

    N = N / 100 * 100;  // 뒤 두 자리 00으로
    for (int i = 0; i < 100; i++) {
        if ((N + i) % F == 0) {
            printf("%02d\n", i);
            break;
        }
    }
    return 0;
}