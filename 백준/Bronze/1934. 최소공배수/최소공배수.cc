#include <stdio.h>

// 최대공약수(GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수(LCM)
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int T;                      // 테스트 케이스 개수
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", lcm(A, B));
    }
    return 0;
}