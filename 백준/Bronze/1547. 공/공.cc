#include <stdio.h>

int main() {
    int m;
    int x, y;
    int ball = 1; // 공의 위치

    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);

        if(ball == x) {
            ball = y;
        }
        else if(ball == y) {
            ball = x;
        }
    }

    printf("%d\n", ball);

    return 0;
}