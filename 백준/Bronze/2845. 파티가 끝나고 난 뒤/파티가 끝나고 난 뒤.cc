#include <stdio.h>

int main() {
    int L, P;
    scanf("%d %d", &L, &P);

    int real = L * P;

    for (int i = 0; i < 5; i++) {
        int x;
        scanf("%d", &x);
        printf("%d ", x - real);
    }

    return 0;
}