#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();  // 숫자 입력 뒤 남은 개행 문자 제거

    char results[100][3];  // 최대 100줄, 각 줄 최대 2글자 + '\0'

    for (int i = 0; i < n; i++) {
        char a;
        char str[1001];
        int idx = 0;

        while (1) {
            a = getchar();
            if (a == '\n' || a == EOF) break;
            if (a != ' ') {
                str[idx++] = a;
            }
        }

        if (idx == 1) {
            // 한 글자면 같은 문자 두 번 저장
            results[i][0] = str[0];
            results[i][1] = str[0];
            results[i][2] = '\0';
        } else {
            results[i][0] = str[0];
            results[i][1] = str[idx - 1];
            results[i][2] = '\0';
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}