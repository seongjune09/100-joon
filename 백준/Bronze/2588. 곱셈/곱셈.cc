#include <stdio.h>
int main(void) {

    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    int one = b % 10;
    int ten = (b / 10) % 10;
    int hundred = b / 100;

    printf("%d\n", a * one);
    printf("%d\n", a * ten);
    printf("%d\n", a * hundred);
    printf("%d\n", a * b);
    return 0;
}