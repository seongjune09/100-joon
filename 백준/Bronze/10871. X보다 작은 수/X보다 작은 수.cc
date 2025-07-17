#include <stdio.h>
int main(void) {
    int n,m;

    scanf("%d %d", &n,&m);

    for(int i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        if (x < m) {
            printf("%d ", x);
        }
    }
    return 0;
}