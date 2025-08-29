#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = N % H;      
        if (floor == 0) floor = H;

        int room = (N - 1) / H + 1;  
        printf("%d\n", floor * 100 + room);
    }

    return 0;
}