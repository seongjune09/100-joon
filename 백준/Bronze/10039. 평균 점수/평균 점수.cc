#include <stdio.h>
int main(void) {
    
    int n[5];
    int sum = 0;

    for(int i=0; i<=4; i++) {
        scanf("%d", &n[i]);
    }

    for(int j=0; j<5; j++) {
        if(n[j] < 40) n[j] = 40;
        sum += n[j];
    }

    printf("%d", sum/5);
    return 0;
}