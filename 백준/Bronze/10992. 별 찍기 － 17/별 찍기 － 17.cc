#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {

        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        if(i == 1) {
            printf("*\n");
        }
        else if(i == N) {
            for(int j = 1; j <= 2 * N - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        else { 
            printf("*");
            for(int j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}