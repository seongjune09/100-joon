#include <stdio.h>
int main(void) {

    int n,m;
    scanf("%d %d", &n,&m);

    if (n > 0 && m > 0) {
        printf("1");
    }
    else if (n < 0 && m > 0) {
        printf("2");
    }
    else if (n < 0 && m < 0 ) {
        printf("3");
    }
    else {
        printf("4");
    }
    return 0;
}