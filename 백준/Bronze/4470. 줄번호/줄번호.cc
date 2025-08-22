#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // 개행 문자 제거

    for (int i = 1; i <= n; i++) {
        char str[101];
        fgets(str, sizeof(str), stdin);
        printf("%d. %s", i, str);
    }
    return 0;
}