#include <stdio.h>

int main() {
    for(int t = 0; t < 3; t++) {
        int n;
        scanf("%d", &n);

        __int128 sum = 0;
        long long x;

        for(int i = 0; i < n; i++) {
            scanf("%lld", &x);
            sum += x;
        }

        if(sum > 0) printf("+\n");
        else if(sum < 0) printf("-\n");
        else printf("0\n");
    }

    return 0;
}