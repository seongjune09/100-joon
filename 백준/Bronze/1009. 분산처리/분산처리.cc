#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        int result = 1;
        int base = a % 10;

        for(int i = 0; i < b; i++) {
            result = (result * base) % 10;
        }

        if(result == 0) result = 10;

        printf("%d\n", result);
    }

    return 0;
}