#include <stdio.h>

int main() {
    int L, A, B, C, D;
    
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
    
    int kor_days = (A + C - 1) / C;
    int math_days = (B + D - 1) / D;
    
    int study_days = kor_days > math_days ? kor_days : math_days;
    
    printf("%d\n", L - study_days);
    
    return 0;
}