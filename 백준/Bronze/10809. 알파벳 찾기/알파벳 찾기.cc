#include <stdio.h>
#include <string.h>

int main() {
    char s[101];            // 최대 100글자
    int alpha[26];          // a~z까지 위치 저장
    int i;

    // 1. alpha 배열을 -1로 초기화
    for (i = 0; i < 26; i++) {
        alpha[i] = -1;
    }

    // 2. 문자열 입력 받기
    scanf("%s", s);

    // 3. 문자열 길이 구하고, 각 문자 처리
    for (i = 0; i < strlen(s); i++) {
        int index = s[i] - 'a';      // 알파벳 위치 (0~25)
        if (alpha[index] == -1) {    // 아직 저장 안 했으면
            alpha[index] = i;        // 현재 위치 저장
        }
    }

    // 4. 결과 출력
    for (i = 0; i < 26; i++) {
        printf("%d ", alpha[i]);
    }

    return 0;
}