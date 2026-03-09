#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i++) {
        if (i % 2 == 1) { 
            for (int j = 0; j < (n + 1) / 2; j++) {
                printf("*");
                if (j != (n + 1) / 2 - 1) printf(" ");
            }
        } else { 
            printf(" ");
            for (int j = 0; j < n / 2; j++) {
                printf("*");
                if (j != n / 2 - 1) printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}