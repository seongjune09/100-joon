#include <stdio.h>

int main() {
    int total, price, sum = 0;

    scanf("%d", &total);

    for(int i = 0; i < 9; i++) {
        scanf("%d", &price);
        sum += price;
    }

    printf("%d\n", total - sum);

    return 0;
}