#include <stdio.h>

int main(void) {
    int n; 
    char str[100];

    scanf("%d", &n); // 문자열 개수 입력

    for (int i = 0; i < n; i++) {
        scanf("%s", str); // 문자열 입력

        // 문자열 끝 '\0'이 나올 때까지 검사
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[j] >= 'A' && str[j] <= 'Z') {
                str[j] = str[j] + 32;  // 대문자 → 소문자 변환
            }
        }

        printf("%s\n", str); // 변환된 문자열 출력
    }

    return 0;
}