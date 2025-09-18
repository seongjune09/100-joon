#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int order; // 가입 순서를 기록
} People;

// 비교 함수
int compare(const void *a, const void *b) {
    People *pa = (People *)a;
    People *pb = (People *)b;

    if (pa->age == pb->age) {
        return pa->order - pb->order; // 가입 순서대로
    }
    return pa->age - pb->age; // 나이순
}

int main(void) {
    int n;
    scanf("%d", &n);

    People p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &p[i].age, p[i].name);
        p[i].order = i; // 입력 순서 저장
    }

    qsort(p, n, sizeof(People), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", p[i].age, p[i].name);
    }

    return 0;
}