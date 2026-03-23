#include <stdio.h>

int main() {
    int a, b, c, d;
    int total;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    total = a + b + c + d;

    printf("%d\n", total / 60);  
    printf("%d\n", total % 60);  

    return 0;
}